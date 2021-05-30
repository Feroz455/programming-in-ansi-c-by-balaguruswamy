/**
Page 283
program 9.1

Write a program with multiple function that do not communication any data
between them
*/

///program begin
#include<stdio.h>
#include<conio.h>

//Function declaration
void printline(void);

void value(void);
//main() function begin

int main()
{
    printline();
    value();
    printline();

	getch();
	return 0;
}
///main() end


/// Function1: Printline()

void printline()
{
    int i;
    for(i = 0; i < 35; i++)
        printf("%c",'-');
    printf("\n");
}
///print function end here

///Function 2: Value()

void value(void)

{
    int year,period;
    float inrate, sum, principal;

    printf("Principal amount?    ");
    scanf("%f",&principal);

    printf("Interest rate ?      ");
    scanf("%f",&inrate);


    printf("Period?              ");
    scanf("%d",&period);


    sum = principal;
    year = 1;

    while(year <= period)
    {
        sum = sum*(1+inrate);
        year++;
    }
    printf("\n%8.2f %5.2f %5d %12.2f\n",principal, inrate,period,sum);
}
///program end

/**
output
-----------------------------------
Principal amount?    5000
Interest rate ?      .12
Period?              5

 5000.00  0.12     5      8811.71
-----------------------------------

Process returned 0 (0x0)   execution time : 12.873 s
Press any key to continue.

*/
