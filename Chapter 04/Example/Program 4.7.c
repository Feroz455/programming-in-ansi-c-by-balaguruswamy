/**
Program 4.7
The program in fig 4.7 illustrates the function of %[] specification
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char address[80];
    printf("Enter address\n");
    scanf("%[^a-z]", address);
    printf("%-80s\n\n", address);
	getch();
	return 0;
}
//main() end

///program end

/**
output

*/
