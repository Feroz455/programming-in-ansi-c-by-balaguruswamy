/**
page 464
program 14.3
Define a macro that receives an array and the number of elements in the array as arguments,
Write a program using this macros to print out the elements of an array.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define VOFC(R) 2*3.1416*R
//main() function begin

int main(int argc,char *argv[])
{
    printf("Radius 5 Volume = %.2f\n",VOFC(5));
    printf("Radius 10 Volume = %.2f\n",VOFC(10));
    printf("Radius 15 Volume = %.2f\n",VOFC(15));
	getch();
	return 0;
}
///main() end

///program end

/**
output
Radius 5 Volume = 31.42
Radius 10 Volume = 62.83
Radius 15 Volume = 94.25


*/
