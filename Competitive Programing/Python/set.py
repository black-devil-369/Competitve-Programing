set1 = set()
print("This is empty set")
print(set1)

#creating a empty set
set1 = set("Github")
print("The element of set")
print(set1)

# Creating a Set with the use of Constructor (Using object to Store String)
String = 'GeeksForGeeks'
set1 = set(String)
print("\nSet with the use of an Object: " )
print(set1)

#creating a set with use of List
set1 = set([353,434,"Github","Hii!"])
print("set with use of List")
print(set1)

#creating a set with mixed type of value
set1 = set([34,53,"Hii!","Github","World"])
print("Set is use of mixed value")
print(set1)

#Adding a element in a set by "add()"
set1 = set()
set1.add(53)
set1.add("Hello")
set1.add(345)
print("Adding element in a set by add() method")
print(set1)

#creating a set by iterator
set1 = set()
for i in range(1,8):
    set1.add(i)
print("adding a element in set 1_7")
print(set1)
