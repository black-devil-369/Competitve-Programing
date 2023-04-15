class Project
    def project
        a = gets.chomp.to_i
        b = gets.chomp.to_i
        sum = a+b;
        puts"sum = #{sum}"
    end
end
class Project2 < Project
    def project2
        project()
        puts("Project function call successfully")
    end
end     
p1 = Project2.new()
p1.project2() 