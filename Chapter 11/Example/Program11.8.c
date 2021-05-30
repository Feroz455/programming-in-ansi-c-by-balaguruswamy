/**
page 380
program 11.8
Write a program that uses a function pointer as a function argument;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1415926
double cos(double);
double y(double);
double table(double (*f)(), double, double, double);

//main() function begin

int main()
{
    printf("Table of Y(x) = 2*x*x-x+1\n\n");
    table(y,0.0,2.0,0.5);
    printf("\nTable of cos(x) \n\n");
    table(cos, 0.0, PI, 0.5);
	getch();
	return 0;
}
double table(double (*f)(), double min, double max,double step)
{
    double a, value;
    for(a = min; a < max; a += step)
    {
        value = (*f)(a);
        printf("%4.2f %10.4f \n",a,value);
    }
}
double y(double x)
{
    return(2*x*x-x+1);
}
///program end

/**
output

*/
