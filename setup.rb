#!/usr/bin/env ruby
=begin 
Homepage:	http://sqwee.rubyforge.org/
Author:		Justin Collins (http://presidentbeef.com/)
Copyright:	2007, Justin Collins
License:	GPL

    This file is part of Sqwee.

    Sqwee is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Sqwee is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Sqwee.  If not, see <http://www.gnu.org/licenses/>.
=end


require "fileutils"

if ARGV[0] and ARGV[0] == "--debug"
	quiet = ""
else
	quiet = "--quiet"
end

FileUtils.rm_rf("bin/*", {:secure => true})
FileUtils.rm_rf("extlib/*", {:secure => true})

#Build Ragel
Dir.chdir("src/ragel") do
	$stderr.puts "Building Ragel..."
	system("./configure #{quiet}") or abort "Error configuring Ragel"
	system("make -j2 #{quiet}") or abort "Error building Ragel"
end


#Build SuperRedCloth
Dir.chdir("src/superredcloth") do
	$stderr.puts "Building SuperRedCloth..."
	system("rake #{quiet}")
	if not File.exist? "lib/superredcloth_scan.so"
		abort "Error building SuperRedCloth"
	end
end

#Build Lighttpd
Dir.chdir("src/lighttpd") do
	$stderr.puts "Building Lighttpd..."
	system("./configure #{quiet} --disable-lfs") or abort "Error configuring Lighttpd"
	system("make -j2 #{quiet}") or abort "Error building Lighttpd"
end

#Build eruby
Dir.chdir("src/eruby") do
	$stderr.puts "Building eruby..."
	system("./configure.rb") or abort "Error configuring eruby"
	system("make -j2 #{quiet}") or abort "Error building eruby"
end

#Move the files over
$stderr.puts "Installing SuperRedCloth..."
FileUtils.cp("src/superredcloth/lib/superredcloth.rb", "extlib/")
FileUtils.cp("src/superredcloth/lib/superredcloth_scan.so", "extlib/")
File.open("extlib/superredcloth.rb.bak", "w") do |f|
	File.readlines("./extlib/superredcloth.rb").each do |line|
		f.puts line.sub(/require 'superredcloth_scan'/, "require 'extlib/superredcloth_scan'")
	end
end

`mv ./extlib/superredcloth.rb.bak ./extlib/superredcloth.rb`


$stderr.puts "Installing Lighttpd..."
modules = ["src/lighttpd/src/.libs/mod_auth.la", "src/lighttpd/src/.libs/mod_auth.so", "src/lighttpd/src/.libs/mod_access.la", "src/lighttpd/src/.libs/mod_access.so", "src/lighttpd/src/.libs/mod_accesslog.la", "src/lighttpd/src/.libs/mod_accesslog.so", "src/lighttpd/src/.libs/mod_cgi.la", "src/lighttpd/src/.libs/mod_cgi.so", "src/lighttpd/src/.libs/mod_indexfile.la", "src/lighttpd/src/.libs/mod_indexfile.so", "src/lighttpd/src/.libs/mod_dirlisting.la", "src/lighttpd/src/.libs/mod_dirlisting.so", "src/lighttpd/src/.libs/mod_staticfile.la", "src/lighttpd/src/.libs/mod_staticfile.so" ]

FileUtils.cp("src/lighttpd/src/lighttpd", "bin/")
if not File.exist? "extlib/lighttpd_modules"
	FileUtils.mkdir "extlib/lighttpd_modules/"
end
FileUtils.cp(modules, "extlib/lighttpd_modules/")

$stderr.puts "Installing eruby..."
FileUtils.cp("src/eruby/eruby", "bin/")

$stderr.puts "Cleaning up..."

Dir.chdir("src/ragel") do
	system("make clean")
end

Dir.chdir("src/superredcloth") do
	system("rake clean")
end

Dir.chdir("src/eruby") do
	system("make clean")
end

Dir.chdir("src/lighttpd") do
	system("make clean")
end

$stderr.puts "Everything should be successfully set up! Try ./start_server to find out, then point your web browser at http://localhost:8000/"
