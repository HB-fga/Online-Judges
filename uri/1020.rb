days = gets.to_i

years = days / 365
days = days % 365
months = days / 30
days = days % 30

puts years.to_s + " ano(s)"
puts months.to_s + " mes(es)"
puts days.to_s + " dia(s)"