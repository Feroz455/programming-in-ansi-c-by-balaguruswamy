/**
page 364
program Write a program to illustrate the use of indirection operator
'*'(Value at address) to access the value pointed to by a printer .
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x, y;
    int *ptr;
    x = 10;
    ptr = &x;
    y  = *ptr;

    printf("Value of x is %d \n\n",x);
    printf("%d is stored at address %u\n",x, &x);
    printf("%d is stored at address %u\n",*&x, &x);
    printf("%d is stored at address %u\n",*ptr, ptr);
    printf("%d is stored at address %u\n",ptr, &ptr);
    printf("%d is stored at address %u\n",y, &y);
    *ptr = 25;
    printf("\nNow x = %d\n",x);


	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
