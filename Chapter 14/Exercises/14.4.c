/**
page 464
program 14.4
Define a macro that receives an array and the number  of elements in the array as
arguments.Write a program using this macro to print out the elements of array.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define PRINT_ARRAY(A,B)\
for(int i = 0; i < B; i++)\
printf("%d\t",A[i]);
//main() function begin

int main(int argc,char *argv[])
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 10;
    PRINT_ARRAY(a,10);
	getch();
	return 0;
}
///main() end

///program end

/**
output
1       2       3       4       5       6       7       8       9       10
*/
