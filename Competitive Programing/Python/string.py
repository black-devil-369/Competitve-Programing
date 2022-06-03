# String
string = 'Welcome to Github'
print('String use from Single quota')
print(string)

string1= "I am Ajay Chauhan"
print("String used from Double quota")
print(string1)

string1 = '''I am Competitive Coder'''
print('''String used from Triple quota''')
print(string1)

string1 = ''' Hiii
Github
Welcome to World
'''
print(string1)

# Formatting of String

string1 = " {} {} {} ".format("Welcome","to", "Github")
print("Print String in the same Order")
print(string)

#Positinal Formatting
string1 = "{1} {2} {0}".format("Welcome","to","Github")
print("Print String in this Order")
print(string1)

#keyword Formatting
string1 = "{a} {b} {c}".format(a="Welcome", b="coding", c="World")
print("Print a String by keyword formatting")
print(string1)

# Old Style Formatting
Integer1 = 12.3456789
print("Formatting in 3.2f format: ")
print('The value of Integer1 is %3.2f' % Integer1)
print("\nFormatting in 3.4f format: ")
print('The value of Integer1 is %3.4f' % Integer1)