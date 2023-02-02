class Day:
    # __init__() is used to define a constructure in python
    # self is a treated as pointer like c++ and java in the python
    def __init__(self,name):
        self.name = name
    def printName(self):
        print("Hello ! my name is ",self.name)
p = Day("Ajay Chauhan")   
p.printName()