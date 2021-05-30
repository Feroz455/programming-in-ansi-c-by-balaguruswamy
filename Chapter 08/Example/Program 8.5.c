/**
page 246
program 8.5

Write a program to store the string "United kingdom" in the array country
and display the string under various formate specification
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char country[15] = "United kingdom";

    printf("\n\n");

    printf("*1234567890987654321*\n");
    printf("--------\n");
    printf("%15s\n",country);
    printf("%5s\n",country);
    printf("%15.6s\n",country);
    printf("%-15.6s\n",country);
    printf("%15.0s\n",country);
    printf("%.3s\n",country);
    printf("%s\n",country);
     printf("--------\n");

	getch();
	return 0;
}
///main() end

///program end

/**
output


*1234567890987654321*
--------
 United kingdom
United kingdom
         United
United

Uni
United kingdom
--------

*/
