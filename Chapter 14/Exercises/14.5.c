/**
page 464
program 14.5
Using the macro define in the exercise 14.4 write a program to compute the sum of all elements in an array
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define PRINT_ARRAY(A,B)\
int sum=0;\
{for(int i=0;i<B;i++){\
printf("%d\t",A[i]);\
sum = sum+A[i];\
}\
printf("\nSUM = %d\n",sum);}
//main() function begin

int main(int argc,char *argv[])
{
    int a[5] = {1,2,3,4,5};
        PRINT_ARRAY(a,5);



	getch();
	return 0;
}
///main() end

///program end

/**
output
1       2       3       4       5
SUM = 15

Process returned 0 (0x0)   execution time : 3.238 s
Press any key to continue.
*/
