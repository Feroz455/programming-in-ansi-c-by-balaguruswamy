/**
Case Studies
1. Salesman’s Salary
A computer manufacturing company has the following monthly compensation policy to their sales-persons
Minimum base salary : 1500.00
Bonus for every computer sold : 200.00
Commission on the total monthly sales : 2 per cent
*/
///Program start from here

#include<stdio.h>

#define BASE_SALAR 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02


///main function begin

int main()
{
        int quantity ;
        float gross_salary, price ;

        float bonus, commission ;

        printf("Input number sold and price\n") ;
        scanf("%d %f", &quantity, &price) ;

        bonus = BONUS_RATE * quantity ;

        commission = COMMISSION * quantity * price ;

        gross_salary = BASE_SALAR + bonus + commission ;

        printf("\n");
        printf("Bonus = %6.2f\n", bonus) ;
        printf("Commission = %6.2f\n", commission) ;
        printf("Gross salary = %6.2f\n", gross_salary) ;

        return 0;
}
///main end
///program end
/**
output
Input number sold and price
5
20450.00

Bonus = 1000.00
Commission = 2045.00
Gross salary = 4545.00

Process returned 0 (0x0)   execution time : 10.034 s
Press any key to continue.
*/
