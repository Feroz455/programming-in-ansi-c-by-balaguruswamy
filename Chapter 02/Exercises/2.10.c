/**
2.10 Write a program to illustrate the use of symbolic constants in a real life application.
*/

///program begin

#include<stdio.h>
#include<conio.h>

#define PI 3.1416

///main function begin

int main()
{
    float r, Area;
    printf("Enter Value of r\n");
    scanf("%f",&r);
    Area = 2 * PI * r;
    printf("Area of a circle = %.2f\n",Area);
    return 0;
}
//program end here
/**
Enter Value of r
12
Area of a circle = 75.40

Process returned 0 (0x0)   execution time : 2.111 s
Press any key to continue.
*/
