
/**
page 376
program 11.6
11.6 Write a function using pointers to exchange the values stored in two location in memory.
*/

///program begin
#include<stdio.h>
#include<conio.h>
void exchange(int *, int *);
//main() function begin

int main()
{
    int x, y;
    x = 100;
    y = 200;

    printf("Before exchange : x = %d    y = %d\n\n",x,y);
    exchange(&x, &y);
    printf("After exchange : x = %d\t y = %d\n\n",x,y);

	getch();
	return 0;
}
///main() end
void exchange(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return;
}
///program end

/**
output

*/
