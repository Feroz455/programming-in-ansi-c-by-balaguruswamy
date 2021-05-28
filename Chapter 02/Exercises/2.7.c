/**
2.7 Write a program to do the following:
a) Declare x and y as integer variables and z as a short integer variable.
b) Assign two 6 digit numbers to x and y.
c) Assign the sum of x and y to z.
d) Output the value of x, y and z.
*/
//program begin
#include<stdio.h>
//main begin
int main()
{
    ///Declare x and y as integer variables and z as a short integer variable.
    int x, y;
    short z;
    ///Assign two 6 digit numbers to x and y.
    x = 789654;
    y = 963258;
    ///Assign the sum of x and y to z.
    z = x + y;

   /// Output the value of x, y and z.
   printf("x = %d\ny = %d\nz = %i",x,y,z);

}
//program end
/**
x = 789654
y = 963258
z = -16560
Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
