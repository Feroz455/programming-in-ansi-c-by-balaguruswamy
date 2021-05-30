/**
Page 291
Program 9.5
Write a function that computes x raised to the power y for integers x
and y and returns double-type-value

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x, y;

    double power(int , int);///function prototype declaration
    printf("Enter x,y: ");
    scanf("%d %d",&x, &y);
    printf("%d to power %d is %f\n",x,y,power(x,y));

	getch();
	return 0;
}
///main() end

double power(int x, int y)
{
    double p;
    p = 1.0;///x to power zero

    if( y >= 0)
        while(y--)///computes positive powers
        p *= x;
    else
        while(y++)///Computes negative powers
        p /= x;
    return(p);///return double type
}
///program end

/**
output
Enter x,y: 16 2
16 to power 2 is 256.000000

Process returned 0 (0x0)   execution time : 5.578 s
Press any key to continue.
*/
