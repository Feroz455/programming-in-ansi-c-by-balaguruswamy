/**
program 2.3
The program in fig 2.9 illustrates the use of scanf function
**/

///program start from here
#include<stdio.h>
///main function from here
int main()
{
    int number;
    printf("Enter an integer number\n");
    scanf("%d",&number);
    if(number >= 100)
    {
        printf("Your number is greater then 100\n");

    }
    else
        printf("Your number is less the 100\n");
    return 0;

}
///main function end here
//program end here
