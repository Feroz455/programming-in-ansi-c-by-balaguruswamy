/**
Sample program 3 discussed in chapter 1 can be converted into more flexible
 interactive program using scanf as shown in fig 2.10
**/

///program start from here

#include<stdio.h>
//main function start from here

int main()
{
    int year,period;
    float amount, inrate, value;

    //printf("Input amount , interest rate, and period\n\n");
    scanf("Input amount , interest rate, and period\n\n %f%f%d",&amount, &inrate, &period);
    putchar('\n');

    year = 1;

    ///loop start from here
    while(year <= period)
    {
        value = amount + inrate * amount;
        printf("%d TK %.2f\n",year, value);
        amount = value;
        year++;
    }
    ///loop end here

    return 0;

}
//main function end here
///program end here

/**
Input amount , interest rate, and period

1000
.14
5

1 TK 1140.00
2 TK 1299.60
3 TK 1481.54
4 TK 1688.96
5 TK 1925.41

Process returned 0 (0x0)   execution time : 6.707 s
Press any key to continue.
**/
