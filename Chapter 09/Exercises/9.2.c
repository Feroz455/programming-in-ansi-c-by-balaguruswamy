/**
page 321
Program exercise 9.2
Write a function space(x) that can be used to provide a space of x positions between two output
numbers.Demonstrate its application
*/

///program begin
#include<stdio.h>
#include<conio.h>

///Function spacex()


void spaceX(int limit)
{
    int i;
    for(i = 0; i < limit; i++)
    {
        printf(" ");
    }
}
//main() function begin

int main()
{
    int num = 20, num1 = 50;
    int limit = 40;

    printf("%d",num);
    spaceX(limit);//spaceX() Function call
    printf("%d",num1);

	getch();
	return 0;
}
///main() end

///program end

/**
output
20                                        50
Process returned 0 (0x0)   execution time : 4.016 s
Press any key to continue.

*/
