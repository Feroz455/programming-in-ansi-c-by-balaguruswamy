/**
4.8 Write a program to print the value 345.6789 in fixed-point format with the following
specification:
a) Correct to two decimal places;
b) Correct to five decimal places; and
c) Correct to zero decimal places.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    float Num=345.6789;
    printf("fixed-point format (correct to two decimal places):-- %.2f\n",Num);
    printf("fixed-point format (correct to five decimal places):-- %.5f\n",Num);
    printf("fixed-point format (correct to zero decimal places):-- %f\n",Num);
	getch();
	return 0;
}
///main() end

///program end

/**
output
fixed-point format (correct to two decimal places):-- 345.68
fixed-point format (correct to five decimal places):-- 345.67889
fixed-point format (correct to zero decimal places):-- 345.678894
*/
