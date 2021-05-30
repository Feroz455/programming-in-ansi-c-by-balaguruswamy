/**
page 286
Program 9.2
Modify the program of Program 9.1
to include the arguments in the function  calls

*/

///program begin
#include<stdio.h>
#include<conio.h>


///Prototype

void printline(char c);
void value(float , float , int);
//main() function begin

int main()
{
    float principal, inrate;
    int period;

    printf("Enter principal amount, interest");
    printf("rate , and period\n");

    scanf("%f %f %d",&principal, &inrate,&period);
    printline('Z');

    value(principal, inrate, period);

    printline('C');

    getch();
	return 0;
}
///main() end


void printline(char c)
{
    int i;
    for(i = 0; i < 52; i++)
    {
        printf("%c",c);
    }
    printf("\n");
}


void value(float p, float r, int n)
{
    int year;
    float sum;
    sum = p;
    year = 1;
    while(year <= n)
    {
        sum = sum *(1+r);
        year = year + 1;
    }
    printf("%f\t%f\t%d\t%f\n",p,r,n,sum);
}
///program end

/**
output
Enter principal amount, interestrate , and period
5000
.12
5
ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
5000.000000     0.120000        5       8811.708984
CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC

Process returned 0 (0x0)   execution time : 12.783 s
Press any key to continue.

*/
