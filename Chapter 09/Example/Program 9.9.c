/**
page 305
program 9.9
Write a multifunction program to illustrate the properties of global
variables
*/

///program begin
#include<stdio.h>
#include<conio.h>

///function prototyping

int fun1(void);
int fun2(void);
int fun3(void);
int x;   ///global
//main() function begin

int main()
{
    x = 10; ///global x
    printf("x = %d\n",x);
    printf("x = %d\n",fun1());
    printf("x = %d\n",fun2());
    printf("x = %d\n",fun3());

	getch();
	return 0;
}
///main() end
int fun1(void)
{
    x = x + 10; ///global x
     return(x);
}

int fun2(void)
{
    int x; ///local variable
    x = 1;
    return(x);
}

int fun3(void)
{
    x = x + 10; ///global x
     return(x);
}
///program end

/**
output
x = 10
x = 20
x = 1
x = 30

Process returned 0 (0x0)   execution time : 3.906 s
Press any key to continue.

*/
