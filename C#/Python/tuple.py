tup1 = ()
print("Print empty tuple")
print(tup1)

#creating a tuple
tuple1 = ("Ajay", "Chauhan",43,34)
print("Tuple with String and number")
print(tuple1)

#creating a  tuple with the use of list
list1 =  [1,2,3,4,5,6,7]
print("List of tuple with use of list")
print(tuple(list1))

#creating tuple with use of function
Tuple = tuple('Github')
print("Tuple with the use of function")
print(Tuple)

#creating tuple with mixed data type
Tuple1 = (5,'Github',4,6,'H!!')
print("Tuple with the mixed data type")
print(Tuple1)

#creating a tuple with nested tuple
tuple1 = (34,53,64,634)
tuple2 = ('Github','Hii','Ajay','Chauhan')
tuple3 = (tuple1,tuple2)
print("Tuple with the nested tuple")
print(tuple3)

#create a tuple with reptition
tuple1 = ("Github",)*4
print("Tuple with the repition")
print(tuple1)

#create a tuple with using of loop
tuple1 = ('Github')
n=6
print("Tuple with using of loop")
for i in range(int(n)):
    tuple1 =(tuple1)
    print(tuple1)

#accessing a tuple with index
tuple1 =('Github')
print("First element of tuple")
print(tuple1[0])

#creating unpacking tuple
tuple1 = ("Hii!","Github","Ajay")
a,b,c=tuple1
print("Value after unpacking")
print(a)
print(b)
print(c)

#Concatenation tuple by '+" or other arthemetic operator"
tuple1 = (1,34,643,65,43)
tuple2 = ("Hii!","Github","Ajay")
tuple3 = tuple1+tuple2
print("Tuple1")
print(tuple1)
print("Tuple2")
print(tuple2)
print("Tuple after concatenation")
print(tuple3)

#Slicing of tuple
tuple1 = ('GithubAcount')
print("Removal of first element of tuple")
print(tuple1[1:])
print("Reversing the tuple")
print(tuple1[::-1])
print("Element of tuple in range")
print(tuple1[2:8])

#deleting tuple
tuple1 = (2,3,4,6,34,63)
print(tuple1)
print(max(tuple1))
print(min(tuple1))
print(len(tuple1))
del tuple1
print("After the deleting tuple")
print(tuple1)
