/**
page 378

program 11.7
The program of fig 11.12 shows how to calculate the sum of two numbers which are passed as argument
using the call by referenced method
*/

///program begin
#include<stdio.h>
#include<conio.h>
void swap(int *p, int *q);
//main() function begin

int main()
{
    int x = 0;
    int y = 20;
    printf("\nValue of x and y before swapping are X = %d and Y = %d",x,y);
    swap(&x, &y);
    printf("\n\nValue of X and Y after swapping are X = %d and Y = %d \n",x,y);
	getch();
	return 0;
}
void swap(int *p, int *q)
{
    int r;
    r = *p;
    *p = *q;
    *q = r;
}
///main() end

///program end

/**
output

*/
