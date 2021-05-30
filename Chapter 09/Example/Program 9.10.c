/**
page 309
Program 9.10
Write a program to illustrate the properties of a static variable

*/

///program begin
#include<stdio.h>
#include<conio.h>

void stat(void);
//main() function begin

int main()
{
    int i;
    for(i = 1; i <= 3; i++)
        stat();

	getch();
	return 0;
}
///main() end

void stat(void)
{
    static int x = 0;
    x = x + 1;
    printf("x = %d\n",x);
}
///program end

/**
output
x = 1
x = 2
x = 3

Process returned 0 (0x0)   execution time : 1.687 s
Press any key to continue.

*/
