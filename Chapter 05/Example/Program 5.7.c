/**
Program 5.7
An employee can apply for a loan at the beginning of every six months, but
he will be sanctioned the amount according to the following company rules:
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define MAXLOAN 50000
//main() function begin

int main()
{
    long int loan1, loan2, loan3, sancloan, sum23;

    printf("Enter the values of previous two loans:\n");
    scanf(" %ld %ld", &loan1, &loan2);

    printf("\nEnter the value of new loan:\n");

    scanf(" %ld", &loan3);
    sum23 = loan2 + loan3;

    sancloan = (loan1>0)? 0 : ((sum23>MAXLOAN)?
    MAXLOAN - loan2 : loan3);

    printf("\n\n");

    printf("Previous loans pending:\n%ld %ld\n",loan1,loan2);


    printf("Loan requested = %ld\n", loan3);

    printf("Loan sanctioned = %ld\n", sancloan);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the values of previous two loans:
0
20000

Enter the value of new loan:
45000


Previous loans pending:
0 20000
Loan requested = 45000
Loan sanctioned = 30000

Process returned 0 (0x0)   execution time : 23.108 s
Press any key to continue.

*/
