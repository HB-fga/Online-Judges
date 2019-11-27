# p1 = gets.to_f
# p2 = gets.to_f
# p3 = gets.to_f
# p4 = gets.to_f

p_str = gets

p_arr = p_str.split(' ')

media = p_arr[0].to_f*2 + p_arr[1].to_f*3 + p_arr[2].to_f*4 + p_arr[3].to_f
media = media / 10

puts "Media: %.1f" % media.to_f

if media < 5.0
    puts "Aluno reprovado."
elsif media >= 7.0
    puts "Aluno aprovado."
else
    puts "Aluno em exame."
    pe = gets.to_f
    puts "Nota do exame: %.1f" % pe.to_f
    media = media + pe
    media = media / 2
    if media >= 5.0
        puts "Aluno aprovado."
    else
        puts "Aluno reprovado."
    end
    puts "Media final: %.1f" % media.to_f
end