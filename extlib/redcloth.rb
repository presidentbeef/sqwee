require 'extlib/redcloth_scan'

$:.unshift(File.dirname(__FILE__))

require 'formatters/html'


class RedCloth
  VERSION = '4.0.0'
  
  # Returns a new RedCloth object, based on _string_. The 
  # _restrictions_ parameter is accepted for backwards
  # compatibility but is not observed.
  #
  #   r = RedCloth.new( "h1. A *bold* man" )
  #   r.to_html
  #     #=>"<h1>A <b>bold</b> man</h1>"
  #
  def initialize( string, restrictions = [] )
      super( string )
  end
  
end
