import turtle
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
s.title("Jai Bhavani")
t.width(2)
t.speed(0)
col = ('yellow', 'pink', 'cyan')
for i in range(300):
    t.pencolor(col[i%3])
    t.forward(i*4)
    t.right(121)
turtle.mainloop()