class India:
    def capitals(self):
        a = int(input("Enter your number for pattern"))
        for i in range(1,a):
            for j in range(1,i):
                print(" * ",end = " ")
            print(" ")
obj1 = India()
obj1.capitals()