/**
page 464
program 14.2
Write a nested macro that gives the minimum of three values
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define MIN(A,B) ((A)<(B)?A:B)
//main() function begin

int main(int argc,char *argv[])
{
    int i, j, k;
    i = 2;
    j = 4;
    k = 6;
    printf("Minimum number is = %d\n",MIN(i,MIN(j,k)));
	getch();
	return 0;
}
///main() end

///program end

/**
output
Minimum number is = 2

Process returned 0 (0x0)   execution time : 2.531 s
Press any key to continue.

*/
