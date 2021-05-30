/**
page 368
program test

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int *p, sum, i;
    int x[5] = {5,9,6,3,7};
    i = 0;
    p = x;  /// Initalizing with base address of

    printf("Element value Address\n\n");

    while(p <= &x[4])
    {
        printf("x[%d]  %d  %u \n", i, *p , p);
        sum  += *p;
        i++; p++;
    }


    printf("\n Sum = %d\n",sum);
    printf("\n&x[0] = %u\n",&x[0]);
    printf("\n p = %d\n",*p);
	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
