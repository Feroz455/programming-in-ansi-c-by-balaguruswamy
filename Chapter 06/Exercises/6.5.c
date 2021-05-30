/**
Program 6.5
Rewrite the program of the example 6.1 using the for statement

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
    for( ;number; number /= 10)
    {
        reverse = number % 10;
        printf("%d ",reverse);
    }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter a number to revers print
147852
2 5 8 7 4 1
Process returned 0 (0x0)   execution time : 4.269 s
Press any key to continue.
*/

