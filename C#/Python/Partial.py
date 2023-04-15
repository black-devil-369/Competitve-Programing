from functools import partial
def f(a,b,c,x):
    return 100*a + 100*b + 100*c + x
g = partial(f,3,1,4)
print(g(5))