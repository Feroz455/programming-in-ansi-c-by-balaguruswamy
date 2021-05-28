/**
3.6 The straight line method of computing the yearly depreciation of the value of an
item is given by:
Depreciation = Purchase price- Salvage Value/Years of Service
Write a Program to determine the salvage value of an item when the purchase price,
years of service and the annual depreciation are given.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        float Dep,Year_Ser,Pur_Price,Sal_Price;

        printf("Enter Depreciation, Year of Service, Purchase price\n");

        scanf("%f%f%f",&Dep,&Year_Ser,&Pur_Price);

        Sal_Price = Pur_Price-(Dep*Year_Ser);

        printf("The salvage value of an item = %.2f ",Sal_Price);
        getch();
}

//main() end

///program end

/**
output
Enter Depreciation, Year of Service, Purchase price
23
2
4789
The salvage value of an item = 4743.00
*/
