/**
page 464
program 14.8
Write a program to illustrate the use of stringizing operator
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define PRINT_VALUE(A,B,C,D) printf(#A" =  %"#B" \n"#C" = %"#D"\n", A, C);
//main() function begin

int main(int argc,char *argv[])
{
     int i, j ;
    i = 10;
    j = 123;
    PRINT_VALUE(i,d,j,d);
    float A,B;
    A = 12.36;
    B = 478.369852;
    PRINT_VALUE(A,.2f,B,.2f);
	getch();
	return 0;
}
///main() end

///program end

/**
output
i =  10
j = 123
A =  12.36
B = 478.37

Process returned 0 (0x0)   execution time : 1.734 s
Press any key to continue.


*/
