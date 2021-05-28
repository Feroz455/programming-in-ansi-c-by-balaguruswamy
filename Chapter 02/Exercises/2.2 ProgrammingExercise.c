/**

2.2 Programming Exercise
write a program to read the price of an item in decimal like 15.95 and
print the output in paisa like 1595 paisa

**/


///program start from here
#include<stdio.h>
//main program begin

int main()
{
    float taka;
    printf("Enter your taka to convert into poisa\n\n");
    scanf("%f",&taka);
    printf("\n\n");
    printf("You Have %.0f poisa", taka*100);

    return 0;
}
/*

output
Enter your taka to convert into poisa

15.95


You Have 1595 poisa
Process returned 0 (0x0)   execution time : 4.229 s
Press any key to continue.
*/
