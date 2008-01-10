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

module Util
	def name_to_file(name)
		name.strip.gsub(/\s/, "_").gsub(/:/, "/")
	end
	
	def name_to_link(name)
		name.strip.gsub(/\s/, "_")
	end

	def file_to_name(file)
		file.strip.gsub(/_/, " ").gsub(/\//, ":")
	end

	def file_to_url(file)
		pages = name_to_link(file).split(":")
		url = []
		pages.each_with_index do |page, i|
			url << "<a href=\"index.rhtml?action=view&amp;page=#{pages[0..i].join(":")}\">#{page.gsub(/_/, " ")}</a>"
		end
		url.join(" : ")
	end

	def sanitize(string)
		string.strip.gsub(/[^a-zA-Z0-9_:-]/, "")
	end
end
