/**
Program 5.5
An electric power distribution company charges its domestic consumers as
follows:
Consumption Units Rate of Charge
0   – 200           Rs. 0.50           per unit
201 – 400           Rs. 100            plus Rs. 0.65 per unit excess of 200
401 – 600           Rs. 230            plus Rs. 0.80 per unit excess of 400
601 and above       Rs. 390            plus Rs. 1.00 per unit excess of 600
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int units, custnum;
        float charges;
        printf("Enter CUSTOMER NO. and UNITS consumed 2");
        scanf("%d %d", &custnum, &units);
        if (units <= 200)
        charges = 0.5 * units;
        else if (units <= 400)
        charges = 100 + 0.65 * (units - 200);
        else if (units <= 600)
        charges = 230 + 0.8 * (units - 400);
        else
        charges = 390 + (units - 600);
        printf("\n\nCustomer No: %d: Charges = %.2f\n", custnum, charges);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter CUSTOMER NO. and UNITS consumed 101 150
Customer No:101 Charges = 75.00
Enter CUSTOMER NO. and UNITS consumed 202 225
Customer No:202 Charges = 116.25
Enter CUSTOMER NO. and UNITS consumed 303 375
Customer No:303 Charges = 213.75
Enter CUSTOMER NO. and UNITS consumed 404 520
Customer No:404 Charges = 326.00
Enter CUSTOMER NO. and UNITS consumed 505 625
Customer No:505 Charges = 415.00
*/
