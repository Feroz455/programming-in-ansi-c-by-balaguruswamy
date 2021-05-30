/**
program 6.1
A program to evaluate the equation
Y = X^n
when n is a non negative integer
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int count, n;
    float x, y;
    printf("Enter the values of x and n : ");
    scanf("%f %d", &x, &n);
    y = 1.0;
    count = 1; /* Initialisation */
    /* LOOP BEGINs */
    while ( count <= n) /* Testing */
    {
    y = y*x;
    count++; /* Incrementing */
    }
    /* END OF LOOP */
    printf("\nx = %f; n = %d; x to power n = %f\n",x,n,y);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the values of x and n : 2.5 4
x = 2.500000; n = 4; x to power n = 39.062500
Enter the values of x and n : 0.5 4
x = 0.500000; n = 4; x to power n = 0.062500
*/
