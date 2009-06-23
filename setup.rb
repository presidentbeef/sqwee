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

begin
	require "redcloth"
rescue LoadError
	begin
		require "rubygems"
	rescue LoadError
		abort "Install RedCloth, either via Ruby Gems or manually."
	end

	begin
		require "redcloth"
	rescue LoadError
		print "Install RedCloth via RubyGems? "
		if gets.chomp =~ /^y/i
			unless system("gem install RedCloth")
				abort "Error installing RedCloth."
			end
		else
			abort "Please install RedCloth."
		end
	end
end


FileUtils.rm_rf("bin/*", {:secure => true})
FileUtils.rm_rf("extlib/*", {:secure => true})

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

$stderr.puts "Installing Lighttpd..."
modules = ["src/lighttpd/src/.libs/mod_auth.la", "src/lighttpd/src/.libs/mod_auth.so", "src/lighttpd/src/.libs/mod_access.la", "src/lighttpd/src/.libs/mod_access.so", "src/lighttpd/src/.libs/mod_accesslog.la", "src/lighttpd/src/.libs/mod_accesslog.so", "src/lighttpd/src/.libs/mod_cgi.la", "src/lighttpd/src/.libs/mod_cgi.so", "src/lighttpd/src/.libs/mod_indexfile.la", "src/lighttpd/src/.libs/mod_indexfile.so", "src/lighttpd/src/.libs/mod_dirlisting.la", "src/lighttpd/src/.libs/mod_dirlisting.so", "src/lighttpd/src/.libs/mod_staticfile.la", "src/lighttpd/src/.libs/mod_staticfile.so" ]

FileUtils.cp("src/lighttpd/src/lighttpd", "bin/")
if not File.exist? "extlib/lighttpd_modules"
	FileUtils.mkdir "extlib/lighttpd_modules/"
end
FileUtils.cp(modules, "extlib/lighttpd_modules/")

$stderr.puts "Installing eruby..."
FileUtils.cp("src/eruby/eruby", "bin/")
FileUtils.cp("src/eruby/eruby-start", "bin/")

$stderr.puts "Cleaning up..."

Dir.chdir("src/lighttpd") do
	system("make clean")
end

Dir.chdir("src/eruby") do
	system("make clean")
end

$stderr.puts "-" * 50
$stderr.puts "Everything should be successfully set up!"
$stderr.puts "Try ./start_server to find out, then point your web browser at http://localhost:8000/"

