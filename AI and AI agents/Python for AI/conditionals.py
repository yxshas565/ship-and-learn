# Conditionals statement if-elif-else


temperature = 0

if temperature > 25:
    print("It's sunny")
elif temperature <= 25 and temperature >= 15:
    print("It's moderate")
elif temperature <=15:
    print("It's pretty cold")
else:
    print("Incorrect input")


age = 19
has_license = True

if age >= 18 and has_license:
    print("The person is legal to drive")
else:
    print("The person isn legal enough to drive")



# Loops

for i in range(10+1):
    print(i,end=" ")
print()


for i in range(0,11,2):
    print(i,end=" ")
print()