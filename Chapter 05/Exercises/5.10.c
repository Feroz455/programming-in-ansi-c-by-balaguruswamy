/**
5.10 Write a program to compute the real roots of a quadratic equation
ax2 + bx+c=0
The roots are given by the equations:
X1=(-b+sqrt(b*b-4*a*c))/(2*a)
X2=(-b-sqrt(b*b-4*a*c))/(2*a)
The program should request for the values of the constants a,b and c and print the
values of x1 and x2. Use the following rules:
(a) No solution , if both a and b are zero
(b) There is only one root,if a=0 (x=-c/b)
(c) There is no real root if b*b-4ac is negative
(d) Otherwise there are real roots.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    float a,b,c,d;
    float x1,x2,x;

    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("\nEnter the value of b: ");
    scanf("%f",&b);
    printf("\nEnter the value of c: ");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    if(a==0 && b==0)
    printf(" There is no solution of the quadratic equation");
    else if(a==0)
    {
    x=-c/b;
    printf(" There is only one root of the equation, x= %f",x);
    }
    else if(d<0)
    {
    printf("The roots are imaginary and as follows: \n");
    }
    else
    {
    x1= (-b+sqrt(d))/(2*a);
    x2= (-b-sqrt(d))/(2*a);
    printf("The roots are real\n");
    printf("x1=%.2f \nx2=%.2f",x1,x2);
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the value of a: 1

Enter the value of b: -3

Enter the value of c: 2
The roots are real
x1=2.00
x2=1.00
*/
