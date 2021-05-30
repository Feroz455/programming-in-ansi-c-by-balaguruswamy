/**
6.3 Write a program to compute the sum of the digits of a given number.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
     int number, i,reverse;
    printf("Enter a number to revers print\n");
    scanf("%d",&number);
    while(number)
    {
        reverse += number % 10;

        number /= 10;
    }
    printf("%d",reverse);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a number to revers print
741258
27
Process returned 0 (0x0)   execution time : 8.411 s
Press any key to continue.
*/

