/*
page 20
1.5 Given the radius of a circle, write a program to compute and display its area Use a Symbolic
constant to define the PI value assume a sutible value for radius.c
*/

#include<stdio.h>
#include<math.h>
//Symbolic constant
#define PI 3.14160
int main()
{
    float r = 12;
    float area;

    //M_PI is constant in math.h function
    area = 2 * M_PI * r;//Or you write area = 2 * PI * r

    printf("Area of a circle %6.2f ",area);
}

/*
output
Area of a circle  75.40
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
*/
