/*
page 20
1.7 Given two integers 20 and 10 , write a program that uses a function add to add these two numbers and
sub to find difference of these two numbers and then display the sum and differece in the following from
*/
//program start from here
#include<stdio.h>
//Function Prototype
void add(int a, int b);
void sub(int a, int b);
//main function from here
int main()
{
    int a, b;
    a = 20;
    b = 10;
    //call add() function with two parameter a and b
    add(a, b);
     //call sub() function with two parameter a and b
    sub(a, b);
    return 0;
}
//main function end here
//add() function declaration
void add(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a+b);
}
//add() function end here
//sub() function declaration
void sub(int a, int b)
{
    printf("%d - %d = %d\n",a, b, a-b);
}
//sub() function end here

/*
20 + 10 = 30
20 - 10 = 10

Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
