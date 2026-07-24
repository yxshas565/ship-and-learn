# External tools

# import from whole module 
import math

print(math.e)
print(math.sqrt(100))
print(math.pi)
print(math.log2(20))



# import specific items from a module
## Not usually recommended 
from math import sqrt, pi
## using like an alias
from math import *

import random


for i in range(5):
    number = random.randint(1,20)
    print(number,end="\t")
print()
for i in range(5):
    choice = random.choice(["ferrari","BMW","Bugatti","Jaguar"])
    print(choice,end='\n')
print()

## To get date and time
import datetime

today = datetime.date.today()
print(today)

## To get operating system
import os

current_dir = os.getcwd()
print(current_dir)

## To get json methods
import json

new_data = [
    {
        "name" : "Yashas",
        "age" : 21
    },
    {
        "name" : "XXX",
        "age" : 25,
    },
    {
        "name" : "YYY",
        "age" : 30, 
    }
]

json_string = json.dumps(new_data)
print(json_string)


import pandas as pd

df = pd.DataFrame(new_data)
print(df)