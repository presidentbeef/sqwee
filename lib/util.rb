module Util
	def name_to_file(name)
		name.strip.gsub(/\s/, "_").gsub(/:/, "/")
	end
	
	def name_to_link(name)
		name.strip.gsub(/\s/, "_")
	end

	def file_to_name(file)
		file.strip.gsub(/_/, " ").gsub(/:/, ":")
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
