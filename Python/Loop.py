
#a = int(input("Enter the Number"))
#for i in range(1,a):
  #  for j in range(i):
 #       print(i,end =' ')
#    print(" ")


def a(n):
    num = 65
    for i in range(0,n):
        for j in range(0,i+1):
             ch = chr(num)
             print(ch, end='  ')
        num = num+1
        print()

    for i in range(0,n):
        for j in range(0,i+1):
            ch = chr(num)
            print(ch, end=' ')
            num = num+1
        print()
n = int(input("Enter the value of n\n"))
a(n)
