### Strings

ASCII codes (American standard)  ---  Unicodes

'A' - 'Z' --> 65 - 90
'a' - 'z' --> 97 - 122
'0' - '9' --> 48 - 57

Every character is associated with a value

There are total 128 characters so ASCII is given from  "0 - 127"

enter --> 10
space --> 13
esc   --> 27

There range is from 0 - 127 ==> total 128 we need total of 7 bits to represent
2^7 = 128
That's why during allocation of charcater is 1 byte


Unicode --> It takes 2 bytes -- 16 biits
They are represented in 4 4 hexadecimal form --> so 4*4 bits


Characters are usually initialised using single quotes

To calculate exact length iterate a loop from 0 to until found '\0' which is termed as end character of that string


In C we use gets(char name); // to print even whitespaces or entire thing