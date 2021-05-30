
/**
page  367
program 11.3
Write a program to illustrate the use of pointers in arithmetic operation
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int a, b, *p1, *p2, x, y, z;
    a  = 12;
    b  = 4;
    p1 = &a;
    p2 = &b;
    x  = *p1 * *p2 - 6;
    y  = 4* - *p2 / *p1 + 10;
    printf("Address of a = %u\n",p1);
    printf("Address of b = %u\n",p2);


    printf("\n");

    printf("a = %d, b = %d\n",a,b);

    printf("x = %d, y = %d\n",x,y);

    *p2 = *p2 + 3;
    *p1 = *p2 - 5;

    z = *p1 * *p2 -6;

    printf("\na = %d , b = %d,",a,b);
    printf(" z  = %d\n",z);


	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
