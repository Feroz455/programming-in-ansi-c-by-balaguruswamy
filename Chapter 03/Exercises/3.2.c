/**
2.2 Write a program that reads a floating-point number and then displays the right
–most digit of the integral part of the number.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    float number;
    scanf("%f",&number);
    printf("Right most number = %d",(int)number%10);
}
//main() end

///program end

/**
output
135.36
Right most number = 5
Process returned 0 (0x0)   execution time : 3.903 s
Press any key to continue.
*/
