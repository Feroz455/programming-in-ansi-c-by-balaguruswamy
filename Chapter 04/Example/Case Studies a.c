/**
1. Inventory Report
Problem: The ABC Electric Company manufactures four consumer products. Their inventory position
on a particular day is given below:
        Code            Quantity         Rate (Rs)
        F105            275             575.00
        H220            107             99.95
        I019            321             215.50
        M315            89              725.00
It is required to prepare the inventory report table in the following format:

INVENTORY REPORT
Code            Quantity        Rate            Value
——              ——              ——              ——
——              ——              ——              ——
——              ——              ——              ——
——              ——              ——              ——
                                Total Value:    ———
The value of each item is given by the product of quantity and rate.
*/

///program begin
#include<stdio.h>
#include<conio.h>

#define ITEMS 4
//main() function begin

int main()
{
                /* BEGIN */
            int i, quantity[5];
            float rate[5], value, total_value;
            char code[5][5];
            /* READING VALUES */
            i = 1;
            while ( i <= ITEMS)
            {
            printf("Enter code, quantity, and rate: ");
            scanf("%s %d %f", code[i], &quantity[i],&rate[i]);
            i++;
            }

            /*.......Printing of Table and Column Headings.......*/
            printf("\n\n");
            printf(" INVENTORY REPORT \n");
            printf("__________________________________________\n");
            printf(" Code \tQuantity \tRate \tValue \n");
           printf("__________________________________________\n");

            /*.......Preparation of Inventory Position..........*/
            total_value = 0;

            i = 1;
            while ( i <= ITEMS)
            {
            value = quantity[i] * rate[i];
            printf("%5s %10d %10.2f %e\n",code[i],quantity[i],
            rate[i],value);
            total_value += value;
            i++;
            }
            /*.......Printing of End of Table..................*/
           printf("__________________________________________\n");
            printf(" Total Value = %e\n",total_value);
         printf("__________________________________________\n");
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter code, quantity, and rate: f102
275
575.00
Enter code, quantity, and rate: h220
107
99.95
Enter code, quantity, and rate: i010
321
215.50
Enter code, quantity, and rate: m315
89
725.00


 INVENTORY REPORT
__________________________________________
 Code    Quantity    Rate       Value
__________________________________________
 f102        275     575.00     1.581250e+005
 h220        107      99.95     1.069465e+004
 i010        321     215.50     6.917550e+004
 m315         89     725.00     6.452500e+004
__________________________________________
 Total Value = 3.025202e+005
__________________________________________
*/
