/**
page 403
program 12.3
Write a program to open a file named INVENTORY and store in it
the following data.

Item name           number          Price           Quantity
AAA-1               111             17.50           115
BBB-2               125             36.00           75
C-3                 247             31.75           104


*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    FILE *fp;
    int number, quantity, i;
    float price, value;
    char item[10] , fileName[10];

    printf("Input File name\n");
    scanf("%s",fileName);
    fp = fopen(fileName, "w");

    printf("Input %s data\n\n",fileName);

    printf("Item name number Price Quantity\n");

    for(i = 0; i < 3; i++)
    {
        fscanf(stdin,"%s %d %f %d",item, &number, &price, &quantity);
        fprintf(fp,"%s %d %f %d",item, number, price, quantity);
    }

    fclose(fp);
    fprintf(stdout,"Hello dear \n\n");

    fp = fopen(fileName,"r");
    printf("Item name Number Price Quantity value\n");
    for(i  = 0; i < 3; i++)
    {
        fscanf(fp,"%s %d %f %d", item, &number, &price, &quantity);

        value = price * quantity;
        fprintf(stdout, "%-8s %7d %8.2f %d %11.2f\n",item, number, price, quantity, value);
    }

    fclose(fp);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Input File name
INVENTORY
Input inventory data

Item name number Price Quantity
AAA-1               111             17.50           115
BBB-2               125             36.00           75
C-3                 247             31.75           104


Item name Number Price Quantity value
AAA-1        111    17.50 115     2012.50
BBB-2        125    36.00 75     2700.00
C-3          247    31.75 104     3302.00

Process returned 0 (0x0)   execution time : 10.531 s
Press any key to continue.

*/
