class Parent
    private
    def privatemethod
        puts"It is privatemethod"
    end
    protected
    def protectedmethod
        puts"It is protectedmethod"
    end
    public
    def publicmethod
        puts"It is publicmethod"
    end
    def publicmethod2
        privatemethod
        protectedmethod
    end
end
class Child<Parent
    def publicmethod3
        puts"It is publicmethod3"
    end
end
obj = Child.new
obj1 = Parent.new
puts"Parent class method"
obj1.publicmethod
obj1.publicmethod2
puts"Child class method"
obj.publicmethod3