#in ruby method is define by "def" keywords
class Github
    # method in ruby is public by default
    def git
        puts"It is public by default"
    end
    #method is private in ruby
    private
    def git1
        puts"It is private method"
    end
    #method is protected in ruby
    protected
    def git2
        puts"It is Proctected method"
    end
    #method is public in ruby
    public
    def a
        git
        git1
        git2
    end
end
obj = Github.new
obj.a
