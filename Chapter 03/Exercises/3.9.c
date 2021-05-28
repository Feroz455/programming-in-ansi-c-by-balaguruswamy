/**
3.9 In inventory management, the economy order quantity for a single item is given
by
EOQ = sqrt((2*dr*sc)/hc)
and the optimal time between orders
TBO= sqrt((2*sc)/(dr*hc))
Write a program to compute EOQ and TBO ,given demand rate ,setup costs,and
the holding cost.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<conio.h>
//main() function begin

int main()
{
    float Dr,Sc,Hc;
    float TBO,EOQ;

    printf("Enter Demand Rate \n");
    scanf("%f",&Dr);
    printf("\n");

    printf("Enter Setup Cost \n");
    scanf("%f",&Sc);
    printf("\n");

    printf("Enter Holding Cost \n");
    scanf("%f",&Hc);
    printf("\n");

    EOQ = sqrt((2*Dr*Sc) / Hc);
    TBO = sqrt((2*Sc) / (Dr*Hc));

    printf("The Economic Order Quantity is : %f\n",EOQ);
    printf("The time Between Order is : %f",TBO);
    getch();
}
//main() end

///program end

/**
output
Enter Demand Rate
24

Enter Setup Cost
23

Enter Holding Cost
2145

The Economic Order Quantity is : 0.717416
The time Between Order is : 0.029892
Process returned 0 (0x0)   execution time : 12.289 s
Press any key to continue.


*/
