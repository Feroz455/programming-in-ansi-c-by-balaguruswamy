/**
5.8 A cloth showroom has announced the following seasonal discounts on purchase of items:
Purchase amount          Discount
                Mill cloth      Handloom items
0   – 100        –              5%
101 – 200        5%             7.5%
201 – 300        7.5%           10.0%
Above 300        10.0%          15.0%

Write a program using switch and if statements to compute the net amount to be paid by a
customer.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int price;
    char c;
    printf("MIll cloth?? press      -> 'M'\n");
    printf("Handloom items?? press  -> 'H'\n");
    c = getchar();

    printf("Enter Product price\n\n");
    scanf("%d",&price);

    switch(c)
    {
    case 'm':
    case 'M':
        if(price <= 100)
            printf("%d TAKA PLEASE!!!",price);
            else
                if(price <= 200)
            printf("%d TAKA PLEASE!!!",(price + (5*price/100)));
            else
                if(price <= 300)
            printf("%d TAKA PLEASE!!!",price + (7.5*price/100));
            else
            printf("%d TAKA PLEASE!!!",price + (10*price/100));

        break;
    case 'h':
    case 'H':
        if(price <= 100)
            printf("%d TAKA PLEASE!!!",price + (5*price/100));

            else
                if(price <= 200)
            printf("%d TAKA PLEASE!!!",price + (7.5*price/100));
            else
                if(price <= 300)
            printf("%d TAKA PLEASE!!!",price + (10*price/100));
            else
            printf("%d TAKA PLEASE!!!",price + (15*price/100));
        break;
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
MIll cloth?? press      -> 'M'
Handloom items?? press  -> 'H'
h
Enter Product price

456
524 TAKA PLEASE!!!
*/
