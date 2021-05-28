/**
1.13 The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is
the diameter of the circle. Write a program to compute the area of the circle.
**/
/***
Algorithm:--
Algorithm to compute the area of the circle.
Step 1: Store 2, 2, 5 and 6 in x1, y1, x2 and y2 respectively.
Step 2: Compute sqrt((x2-x1)*(x2-x1)+ (y2-y1)* (y2-y1)) and store the result in Dia.
Step 3: Compute Dia/2 and store the result in Rad.
Step 4: Compute PIE*Rad*Rad and store the result in Area.
***/
//Function start from here
#include<stdio.h>
#include<math.h>
///Main function start from here
int main()
{
    int x1, x2, y1, y2;
    float Distance, Area;
    x1 = 2;
    x2 = 5;
    y1 = 2;
    y2 = 6;
    Distance = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
    Area = (M_PI * pow((Distance/2),2));
    printf("Area = %.2f",Area);
    return 0;

}
/***
output
Area = 19.63
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.
**/
