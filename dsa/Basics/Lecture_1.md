## DSA Basics

--> getting started 
--> imporve problem solving skills / thought process on solving a problem

--> 1. first understand the problem 
    2. what all is given values , 
    3. approach to be followed , 
    4. program


problem --> rought soln. (ie. pseudo code or flow chart) ---> convert to prg.(in High level lang. / src. code)

--> but computer only undertand 0/1's --> so we have to covert to machine understandable lang. 

--> Flowchart = diagramatical approach of the solution or approach 
--> Pseudo code = descriptive way or generic way of writing the logic (there may be mulitple approaches and incerasing depth dose'nt matter)

Eg 1 :-

sum of 2 no's

func sum(int a , int b){
    sum = a + b
    return sum
}

func main(){
    input(a,b)
}


Eg 2 :-

find simple interst

1. Start
2. INPUT P,R,t
3. SI = 0
4. SI = (P * R * t) / 100
5. return SI
6. end


Eg 3:-

avg of 3 no's

1. Start
2. Read 3 no's
3. Sum = 0 
4. Avg = 0
5. Sum = a + b + c
6. Avg = Sum / 3
7. return Avg
6. end


Eg 4:-

tell if a is less than b or not

1. Start
2. Read 2 no's a,b
3. if (a < b)  
        return yes
    else 
        return no
4. end


Eg 5:-

check if given number is odd or even

1. Start
2. Read a number
3. if (number % 2 != 0)
        return "Odd"
   else
        return "Even"
4. end


Eg 6:-

check if +ve , -ve , or 0

1. Start
2. Read a number 
3. if (a < 0)
        return negative
    else if (a > 0)
        return positive
    else    
        return 0
4. end


Eg 7:-

check if vald triangle or not

1. Start
2. Read 3 no's A,B,C
3. if (A+B > C)
        if (B+C > A)
            if (C+A > B)
                return "Valid triangle"
            else
                return "Not valid triangle"
        else
            return "Not valid triangle"
    else
        return "Not valid triangle"
4. end


Eg 8:-

print 1 to n

1. Start
2. Read n
3. for (i <- 1 to n)
    print i
4. end


Eg 9:-

print evn no's b/w 1 to n

1. Start
2. Read n
3. for (i <- 1 to n)
        if (i % 2 == 0)
            print i
4. end


Eg 10:-

print sum of 1 to n (inclusive)

1. Start
2. Read n
3. Sum = 0
4. for (i <- 1 to n)
        sum = sum + i
5. return sum
6. end


Eg 11:-

find factorial of n

1. Start
2. fact = 1
3. Read n
4. for (i <- 1 to n)
        fact = fact * i
5. return fact
6. end


Eg 12:-

check prime or not

1. Start
2. isprime = 0
3. Read n
4. if (n == 0 || n == 1 || n == 2)
        isprime = 1
   else
        for (i<-2 to n-1)
            if (n % i == 0)
                isprime = 0
                break
            else
                isprime = 1
5. if(isprime == 1)
        return "Prime number"
   else
        return "Not a prime number"
6. end



Programming language : 
1. What and Why ??
--> Instruction to execute a task is to be done by using a programming
--> Every Lang has some semantics and rules
src code (prg) ---> translator/interpreter/compiler (it converts src. code to binary langauge) --> it gives back exe. file
