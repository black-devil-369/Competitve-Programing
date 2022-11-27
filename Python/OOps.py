from tkinter import Y


class India:
    def capitals(self):
        a = int(input("Enter your number for pattern\n"))
        for i in range(1,a):
            for j in range(1,i):
                print(" * ",end = " ")
            print(" ")
    def shout(text):
        return text.upper()
    print(shout('hello'))
    yell = shout
    print(yell('hello'))
#funtion can return another funtion
    def fun1(x):
        def fun2(y):
            return x+y 
        return fun2
    fun3 = fun1(53)
    print(fun3(42))
#funtion call in another function
def loop(text):
        return text.upper()
def loop2(text):
        return text.lower()
def loop3(func):
    greeting = func("HI How are you")
    print(greeting)
loop3(loop)
loop3(loop2)
obj1 = India()
obj1.capitals()
obj1.shout()
obj1.fun1()
