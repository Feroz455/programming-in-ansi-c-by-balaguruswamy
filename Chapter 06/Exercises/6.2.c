/**
5.2 The factorial of an integer m is the product of consecutive integers from 1 to m. That is,
Factorial m = m! = m*(m-1)*…………1
Write a program that computes and prints a table of factorials for any given m.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int fac, i, j;
    printf("Enter a number to print factorial\n");
    scanf("%d",&i);

    fac = 1;
    for(j = 1; j <= i; j++)
    {
        fac *= j;
    }
    printf("Factorial of %d = %ld\n",i, fac );
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a number to print factorial
13
Factorial of 13 = 1932053504
*/

