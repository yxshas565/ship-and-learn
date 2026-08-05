### Introduction to DSA

1. Data structure = Arrangement or organising of data such that operations can be performed effeciently.
2. Databases = Relational data or  an organised form data stored in form of tables or relational way is called databases.
3. Data warehouses = Very large size data which isn't used often , or historical data is stored in multiple diiferent discs which is further stored in data warehouses usually multiple disks or tapes of data. So for analysing this data we use data-mining algorithm's.
4. Big data = Storing and utilising the data which is present through the world which is currently large is called big data.


--> Without data-structures no operations can be performed
--> Datastructure is inside main memory which is formed during execution time of prg.



HDD Storage contains all of our files  <------>  Main memory <--> CPU

--> When clicked on an icon or application it is intially bought into main-memory and then CPU starts executing that application.....even data also is bought into main memory




## Static vs Dynamic memory allocation


1. Memory is divided into bytes
2. Every byte has an address
3. "0-65535" --> size of main memory is 64KB -- starts from 0 and ends at 65535
4. So if more RAM is there our memory is divided into multiple segments each segment contains 64KB



Progran <--->  Heap  <--> CPU
               Stack
               Code section (prog is bought here as main func.)


void main(){
    int a = 5; // --> it uses 4 bytes
    float b = 4.56; // --> it uses 4 bytes

    // so these 8 bytes are allocated inside stack which is called as "stack frame" or "activation record" inside stack.
    // it is static because the number of bytes required since size of how much to be allocated was decided in compile time. 

    
}