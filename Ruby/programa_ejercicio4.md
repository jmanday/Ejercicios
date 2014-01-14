#!/usr/bin/ruby

require 'net/http'

def fecha(url)
	informacion = Net::HTTP.get_response  url, '/'
	puts("Fecha ultima modificacion: #{informacion['date'].to_s}\n")

end



url = ARGV[0]

fecha(url)
