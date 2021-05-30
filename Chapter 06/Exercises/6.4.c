/**
6.4 The numbers in the sequence
1 1 2 3 5 8 13 21 …………………….
are called Fibonacci numbers. Write a program using do ……….. while loop to calculate
and print the first m Fibonacci numbers.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i,j,k,fib,fib1=0, fib2=1;
    printf("Enter a number to print its Fibonacci \n");
    scanf("%d",&i);
    if( i <= 1)
    {
        printf("Fib is = 1\n");
    }
    else
    {
        printf("%d\t",fib2);
        for(j = 0; j <= i; j++)
        {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
            printf("%d\t",fib);
        }
    printf("\nFib is = %d",fib);
    }


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a number to print its Fibonacci
6
1       1       2       3       5       8       13      21
Fib is = 21
*/
