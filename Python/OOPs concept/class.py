class Day:
    # __init__() is used to define a constructure in python
    # self is a treated as pointer like c++ and java in the python
    def __init__(self,name):
        self.name = name
    def printName(self):
        print("Hello ! my name is ",self.name)
p = Day("Ajay Chauhan")   
p.printName()

#Poloymorphism in python 
# Polymorhpism with python class

class India():
    def capital(self):
        print("Delhi is capital of India")
    def language(self):
        print("Hindi is spoken mostly all over the country of india")
    def type(self):
        print("India is Developing country")
class USA():
    def capital(self):
        print("Washington DC is capital of USA")
    def langauge(self):
        print("English is spoken all over the country of USA")
    def type(self):
        print("USA is Developed Country")
# creating an object for classess
obj_usa = USA()
obj_ind = India()
for country in (obj_ind,obj_usa):
    country.capital()
    country.language()
    country.type()
