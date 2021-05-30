/**
page 235
program 7.14
Every book published by international publishers should carry an international Standard book
Number(ISBN) its is a 10 character 4 part number as shown below.

                        0-07-0411832-2
The first part denotes the region.the second represents publisher.The Third identifies the book
and the fourth is the check digit.The check digit is computed as follows;
        SUM = (1 * first digit) + (2 * 2nd) + (3*3rd) +----------+(9 * 9th digit)
 */

///program begin
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

//main() function begin

int main()
{
    int number[10];
    long int i;
    int r = 0,j,NUM = 0;

    printf("Enter your ISBN number without '-' \n");
    scanf("%ld",&i);
      for( j = 9; j >= 0; j--)
    {
        r = i%10;
        number[j] = r;
        i = i/10;
    }

    int check = number[9];
    if((NUM % 11) == check)
    {
        printf("\nIts a Valid ISBN Number\n ");
    }
    else
       printf("\nIts not  a Valid ISBN Number\n");

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your ISBN number with '-'
0070411832

Process returned -1073741819 (0xC0000005)   execution time : 23.005 s
Press any key to continue.

Enter your ISBN number with '-'
0070411830

Its a Valid ISBN Number
*/
