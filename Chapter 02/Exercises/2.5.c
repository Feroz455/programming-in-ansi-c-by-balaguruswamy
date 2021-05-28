/**

2.5 Programing exercises
The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs.15. Write a
program to get these values from the user and display the prices as follows:
*** LIST OF ITEMS***
Item Price
Rice Rs. 16.75
Sugar Rs. 15.00

*/
///Program begin
#include<stdio.h>

///main function begin

int main()
{
    float Rice, Suger;

    printf("Enter price of rice = ");

    scanf("%f", &Rice);
    printf("Enter price of suger = ");

    scanf("%f",&Suger);
    printf("\n\n*** LIST OF ITEMS***\n\n");
    printf("Item    Price\n");
    printf("Rice    TK %.2f\n",Rice);
    printf("Suger   TK %.2f\n",Suger);

    return 0;

}
//main function end here
///program end
/**
output
Enter price of rice = 16.75
Enter price of suger = 15.00


*** LIST OF ITEMS***

Item    Price
Rice    TK 16.75
Suger   TK 15.00

Process returned 0 (0x0)   execution time : 6.515 s
Press any key to continue.
*/
