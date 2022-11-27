class Inheritance
    private
    def inheritance
        puts("It is a Parents class")
    end
end
class Derived < Inheritance
    def derived
        puts("It is a Derived class")
    inheritance #method call
    end
end
class Loop < Derived
    def loop11
        puts("It is a Loop")
    end
end
obj = Loop.new()
obj.loop11
obj.derived
obj.inheritance