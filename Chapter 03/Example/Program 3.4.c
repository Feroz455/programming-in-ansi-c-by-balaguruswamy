/**
Program 3.4
The program in Fig. 3.4 illustrates the use of variables in expressions and
their evaluation.
*/

//program begin
#include<stdio.h>

//main begin
int main()
{
       float a, b, c, x, y, z;
        a = 9;
        b = 12;
        c = 3;
        x = a - b / 3 + c * 2 - 1;
        y = a - b / (3 + c) * (2 - 1);
        z = a - (b / (3 + c) * 2) - 1;
        printf("x = %f\n", x);
        printf("y = %f\n", y);
        printf("z = %f\n", z);

        return 0;
}
///program end here
/**
Output
x = 10.000000
y = 7.000000
z = 4.000000
*/
