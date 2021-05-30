/**
Program 6.5
The program in Fig. 6.6 shows how to write a C program to print nth Fibonacci
number.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int num1 =0, num2 = 1, n, i, fib;

    printf("Enter the value of n: ");
    scanf ("%d", &n);
    for (i = 1; i <= n-2; i++)
    {
    fib=num1 + num2;
    num1=num2;
    num2=fib;
    }
    printf("\nnth fibonacci number (for n = %d) = %d",n,fib);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the value of n: 45

nth fibonacci number (for n = 45) = 701408733
Process returned 0 (0x0)   execution time : 7.649 s
Press any key to continue.
*/
