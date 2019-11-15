inp = gets.to_f

if (inp < 0) || (inp > 100)
    puts "Fora de intervalo"
elsif (inp <= 25)
    puts "Intervalo [0,25]"
elsif (inp  <= 50)
    puts "Intervalo (25,50]"
elsif (inp  <= 75)
    puts "Intervalo (50,75]"
elsif (inp  <= 100)
    puts "Intervalo (75,100]"
end