a = gets.chomp.to_i
while a>=1
    b = gets.chomp.to_i
    c = gets.chomp.to_i
    if(b>c || b==c)
        puts(b-c)
    else
        puts"0"
        a = a-1
    end
end
