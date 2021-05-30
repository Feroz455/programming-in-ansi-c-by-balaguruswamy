/**
page 303
program 9.8
Write a multifunction to illustrate how automatic variable work
*/

///program begin
#include<stdio.h>
#include<conio.h>
///function prototype
void function1(void);
void function2(void);
//main() function begin

int main()
{
    int m = 1000;
    function2();

    printf("%d\n",m);///Third output


	getch();
	return 0;
}
///main() end
void function1(void)
{
    int m = 10;
    printf("%d\n",m);
}

void function2( void )
{
    int m = 100;
    function1();
    printf("%d\n",m);///second output
}
///program end

/**
output
10
100
1000

Process returned 0 (0x0)   execution time : 0.359 s
Press any key to continue.


*/
