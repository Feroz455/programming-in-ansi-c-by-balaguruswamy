/**
page 418
program 12.8
12.8 Write a program to create a sequential file that could store details about five products.
Details include product code.Cost and number of items available and are provide through key board;
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main(int argc,char *argv[])
{
    FILE *fp;
    char item[20];
    int i, quantity,number;
    float price, value;

    ///Storing data into file
    printf("Enter Item name\nItem Number\nItem price\nItem quantity\n");
    fp = fopen("DATA", "w");


    for(i = 0; i < 5 ; i++)
    {
        fscanf(stdin,"%s %d %f %d",item, &number, &price, &quantity);
        fprintf(fp,"%s %d %f %d",item, number, price, quantity);
    }
    fclose(fp);


    ///retrive data from file
    fp = fopen("DATA", "r");
    printf("Name\tnumebr\tprice\tquantity\n");


    for(i = 0; i < 5 ; i++)
    {
        fscanf(fp,"%s %d %f %d",item, &number, &price, &quantity);
        fprintf(stdout,"%s\t%d\t%.2f\t%d\n\n",item, number, price, quantity);
    }
    fclose(fp);


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter Item name
Item Number
Item price
Item quantity
AAA 444 45.2 45
BBB 444 14.25 12
CCC 555 78.0
24
DDD 888 25.2 5
FFF 999 5.3 75
Name    numebr  price   quantity
AAA     444     45.20   45

BBB     444     14.25   12

CCC     555     78.00   24

DDD     888     25.20   5

FFF     999     5.30    75


Process returned 0 (0x0)   execution time : 11.456 s
Press any key to continue.
*/
