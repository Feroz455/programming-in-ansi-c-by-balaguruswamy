/**
6.1 Given a number, write a program using while loop to reverse the digits of the number.
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
        reverse = number % 10;
        printf("%d",reverse);
        number /= 10;
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a number to revers print
4567
7654
Process returned 0 (0x0)   execution time : 10.929 s
Press any key to continue.
*/

