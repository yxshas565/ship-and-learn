## Getting started 

Src. code ---> Compiler --> Binary langauge
Compiler --> Translation , find errors , 

IDE --> Integrated developer environment


"<<" --> used for writing something 
"endl" or "\n" --> to move to next line

DATA TYPES AND VARAIABLES :- 
int --> 4 bytes --> 32 bit
char --> 1 byte --> 8 bit
bool --> true or false --> 1 or 0 for 1 bit
float --> 4 byte = 32 bit
double --> 8 byte = 64 bit


How data is stored ??
int a = 8;  --> it converts 8 into binary as 00000 0000 0000 0100
for -ve numbers :- int b = -8
char ch = 'a'; --> using ASCII table


for computer to know whether int or char when stored in binary form it used help of defined datatypes while defining the data types
typecast --> we can convert one data-type to another


-ve numbers are stored 
first bit +ve = 0 , -ve = 1

ignore -ve sign
covert to binary representation
take 2's complement = 1's complement + 1
1's complement = change all 0's to 1's and vice versa
this becomes -ve number and we an display


if +ve = starts from 0 the MSB --> (2^31 to 1)
if -ve = starts from 1 the MSB --> (-(2^31) to 1)
to represent 0 we can use 2 representations
so finally it ecomes the range (-(2^31) to 2^31 - 1)

unsigned number range is (0 to 2^32 - 1) ie. it has no sign

operators :- 
1. Arithemetic operator :- modulo %
2. + , - , * , / 
no specific exponent or pow operator we have to use pow() ie. func. itself
Relational o/p :- "= , > , < , >= , <= , != , =="
Logical operator :- && , // , ! ie. refer truth table to know specific results
Bitwise operator :- & , | , ^ , ~ , << , >>
<< left shift =. a << n = a * 2^n
>> right shift = a >> n = a/2^n