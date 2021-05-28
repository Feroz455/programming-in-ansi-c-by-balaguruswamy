/**
3.13 Given three values, write a program to read three values from keyboard and print out the
largest of them without using if statement.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("\nLargest number is %d \n",a > b && a > c  ? a : b > c ? b :c);


}
//main() end

///program end

/**
output
12 14 54

Largest number is 54

Process returned 0 (0x0)   execution time : 5.958 s
Press any key to continue.
*/
