## Functions = Reusale blocks of code that do specific tasks.

# Why use functions :- 
# 1. Don't repeat yourself
# 2. Stay organised
# 3. Fix bugs easier
# 4. Test your code


# Defining functions --> Parameters --> Return values

## Positional arguments =  order matters
## Keyword arguments = order dose'nt matters

## Local variables = It is restricted only to particular functions
## Global variables = It can be used throughout the function

def greet(name): # name --> it's a parameter
    for i in range(5):
        print(f"Hello !! , My name is {name}")

def full_name(first_name,last_name):
    print(f"Hello, My name is {first_name} {last_name}")

def checkweather(temp):
    if temp >= 25:
        print("It's too sunny !!")
    elif temp < 25 and temp >=15:
        print("It's moderate temp !!")
    else:
        print("It's too cold")

def calculate_total_tax(price , tax_rate , discount):
    tax = price * tax_rate
    final_price = price + tax - discount
    print(f"Total : {final_price}")


greet(name = "Yashas")
checkweather(7)
full_name(last_name="Sadananda",first_name="Yashas")
calculate_total_tax(2001.34,0.05,10)



## Return values

def add_print(a , b):
    print(a + b)


def add_return(a , b):
    return a + b

add_print(5, 10)
sum = add_return(2,9)

print(sum + 20.56789)

def calculate_area(length , breadth):
    return length * breadth

area_rectangle = calculate_area(23.45 , 67.43)
print(f"Area of rectangle : {area_rectangle} sq.ft")


if area_rectangle > 10000:
    print("Too big area !!")
else:
    print("Area is perfect for a small family")


def simple_func():
    numbers = [1,2,3,4,5]
    first_num = numbers[0]
    last_num = numbers[-1]

    return first_num,last_num


f,l = simple_func()

print(f"First number : {f} , Last number : {l}")