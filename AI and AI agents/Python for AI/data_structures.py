# Data structures

# Lists , Dictionaries , Tuples , Sets


# Lists 

create_list = ["Ferrari","BMW",18,56.53]
print(create_list)

create_list.append("Yashas S")
create_list.remove(18)
create_list.insert(1,"Buggati")
create_list.pop()

## Similarly like strings lists also has methods 

for i in create_list:
    print(i)


new_list = [3,1,4,1,5,9]

print(len(new_list))
print(new_list.count(1))
print(new_list.index(9))

new_list.sort()
print(new_list)



# Dictionaries

person = {
    "name" : "Yashas S",
    "age" : 20,
    "is_student" : True,
    "city" : "Bangalore",
}


print(person.keys())
print(person.values())
print(person.items())



# Tuples same as list but imutable

empty_tuple = ()
colors = ("Red","Green")


print(colors)


# Sets = a list which removes duplicate items

# It stores only unique values

my_set = {1,2,3,4,1,1,1,1,1,4,7}
print(my_set)