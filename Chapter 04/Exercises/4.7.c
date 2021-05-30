/**
4.7 Write a program that prints the value 10.45678 in exponential format with the following
specification:
a) correct to two decimal places;
b) correct to four decimal places; and
c) correct to eight decimal places.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    float Num=10.45678;

    printf("exponential format with correct to two decimal places:-- %.2e\n",Num);
    printf("exponential format with correct to four decimal places:-- %.4e\n",Num);
    printf("exponential format with correct to eight decimal places:-- %.8e\n",Num);
	getch();
	return 0;
}
///main() end

///program end

/**
output
exponential format with correct to two decimal places:-- 1.05e+001
exponential format with correct to four decimal places:-- 1.0457e+001
exponential format with correct to eight decimal places:-- 1.04567804e+001
*/
