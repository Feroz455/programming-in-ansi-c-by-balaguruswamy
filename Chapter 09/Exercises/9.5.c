/**
page 322
program exercises 9.5
The Fibonacci numbers are define recursively as follows
F1 = 1;
F2 = 1;
Fn = Fn-1 + Fn-2 , if n > 2

Write a function that will generate and print the first n Fibonacci numbers .Test the function for
n = 5, 10, 15;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void FFibonacchi(int n);
//main() function begin
int fib = 0, fib1 = 0, fib2 = 0,i = 1;

int main()
{
    FFibonacchi(10);
	getch();
	return 0;
}
void FFibonacchi(int n)
{
    if(n == 0)
    {
        return;
       // exit(0);
    }
    else if(i == 1)
    {
        fib1 = 1;
        printf("%d ",fib1);
        i++;
        FFibonacchi(n-1);
    }
    else if(i == 2)
    {
        fib2 = 1;
        printf("%d ",fib2);
        i++;
        FFibonacchi(n-1);
    }
    else
        fib = fib1 + fib2;
        printf("%d ",fib);

    fib1 = fib2;
    fib2 = fib;
    i++;
    FFibonacchi(n-1);
    return;
}

///main() end

///program end

/**
output

void Fibonacci(int j)
{
 int i,fib1, fib2,fib;


    for( i = 1; i <= j ; i++)
    {
        if(i == 1 )
            {
                fib1 = 1;
                printf("%d ",fib1);
            }
            else if( i == 2)
            {
                fib2 = 1;
                printf("%d ",fib2);
            }
        else
        {
            fib = fib1 + fib2;
            printf("%d ",fib);
            fib1 = fib2;
            fib2 = fib;
        }

    }
}
*/
