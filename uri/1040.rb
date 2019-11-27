p1 = gets.to_f
p2 = gets.to_f
p3 = gets.to_f
p4 = gets.to_f

media = p1*2 + p2*3 + p3*4 + p4
media = media / 10

puts "Media: " + media.to_s

if media < 5.0
    puts "Aluno reprovado."
elsif media >= 7.0
    puts "Aluno aprovado."
else
    puts "Aluno em exame."
    pe = gets.to_f
    puts "Nota do exame: " + pe.to_s
    media = media + pe
    media = media / 2
    if media >= 5.0
        puts "Aluno aprovado."
    else
        puts "Aluno reprovado."
    end
    puts "Media final: " + media.to_s
end