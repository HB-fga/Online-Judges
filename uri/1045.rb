input = gets
lados = input.split(' ')

lados[0] = lados[0].to_f
lados[1] = lados[1].to_f
lados[2] = lados[2].to_f

if lados[0] < lados[1]
    lados[0], lados[1] = lados[1], lados[0]
end
if lados[0] < lados[2]
    lados[0], lados[2] = lados[2], lados[0]
end
if lados[1] < lados[2]
    lados[1], lados[2] = lados[2], lados[1]
end

if lados[0] >= lados[1] + lados[2]
    puts "NAO FORMA TRIANGULO"
else
    if lados[0]**2 == lados[1]**2 + lados[2]**2
        puts "TRIANGULO RETANGULO"
    elsif lados[0]**2 > lados[1]**2 + lados[2]**2
        puts "TRIANGULO OBTUSANGULO"
    elsif lados[0]**2 < lados[1]**2 + lados[2]**2
        puts "TRIANGULO ACUTANGULO"
    end

    if lados[0] == lados[1] && lados[1] == lados[2]
        puts "TRIANGULO EQUILATERO"
    elsif lados[0] == lados[1] || lados[1] == lados[2] || lados[0] == lados[2]
        puts "TRIANGULO ISOSCELES"
    end
end