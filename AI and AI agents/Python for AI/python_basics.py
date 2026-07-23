# storing info. variables

age = 18
name = "XXX"

first_name = "Yashas"
last_name = "S"

full_name = first_name + ' ' + last_name

print(f"My name is {name} , I am currently {age} years old !!")
print(f"My first name is {first_name} and last name is {last_name}")
print(f"My full name is {full_name}")


# This is a single line commeny
"""
    This is a 
    multi-line
    comment
"""


# Basic math operators 

a = 5
b = 10

print(a + b)
print(a - b)
print(a * b)
print(a / b)
print(a % b)
print(a // b)
print(a ** 2)


string = "My name is XXX and am string data type"
length_string = len(string)
print(type(string))
print(f"Length of str : {length_string}")


for i in string:
    if (i == "i"):
        print(f"char 'i' is present here and in index {i}")
        break


# booleans
# Logical operator
is_logged_in = True
is_admin = False
is_adult = True

if is_adult and age >= 18:
    print("Hey , you can vote for upcoming election")
else:
    print("Hey , we r sorry but ur'nt yet capable of voting")


# Order of precedence 

# PEDMAS 


# Assignemnet opeartor
score = 10
score += 6

print(score)


# String manipulation

new_name = "Yashas Sadananda"
new_string = f"Hi , My name is {new_name} !!"

print(new_string)


text = "Python Programming"

print(text.lower())
print(text.upper())
print(text.capitalize())
print(text.title())

# Other methods 

# startwith()
# endswith()
# count()
# find()
# replace("","")
# and many more ....