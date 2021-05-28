/*
page 20
1.8
Given the values of three variables a,b and c write a program to compute and display the value of x where
 x = a/(b-c)
 Execute your program for the following values
 a) a = 250 b = 85 c = 25
 b) a 300 , b = 70, c = 70;
 comment on the output in each case
*/
//header file
#include<stdio.h>
//function prototype
float  ValueOfX(int a, int b, int c);

//main function start here
int main()
{
    int a, b, c;
    a = 250;
    b = 85;
    c = 25;

    //ValueOfX(a,b,c) function call inside printf
    printf("%d/(%d+%d) = %5.2f\n", a, b, c,ValueOfX(a,b,c));
    a = 300;
    b = 70;
    c = 70;
    // ValueOfX(a,b,c) function call inside printf
    printf("%d/(%d+%d) = %5.2f\n", a, b, c,ValueOfX(a,b,c));
}
//ValueOfX function declaration start from here
float ValueOfX(int a, int b, int c)
{
    //condition checking , divide by is forbidden
    if((b-c) == 0)
        return 0;
    float x = (a/(b-c));
    return x;
}
//ValueOfX function declaration end here
/*
250/(85+25) =  4.00
300/(70+70) =  0.00

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.
*/

