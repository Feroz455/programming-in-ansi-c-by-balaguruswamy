/**
page 418
program 12.9
12.9 Write the program to read the file created in Exercises 12.8
and compute and print the total value of all the five products.

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
    float price, value, total = 0;

    fp = fopen("DATA", "r");
    printf("Name\tnumebr\tprice\t  quantity\tValue\n");


    for(i = 0; i < 5 ; i++)
    {
        fscanf(fp,"%s %d %f %d",item, &number, &price, &quantity);
        fprintf(stdout,"%s\t%d\t%.2f\t\t%d\t%.2f\n\n",item, number, price, quantity,(quantity*price));
        total +=  quantity*price;

    }
    printf("TOTAL VALUE OF ALL FIVE PRODUCT\n\n");
    printf("%.2f",total);
    fclose(fp);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Name    numebr  price     quantity      Value
AAA     444     45.20           45      2034.00

BBB     444     14.25           12      171.00

CCC     555     78.00           24      1872.00

DDD     888     25.20           5       126.00

FFF     999     5.30            75      397.50

TOTAL VALUE OF ALL FIVE PRODUCT

4600.50
Process returned 0 (0x0)   execution time : 13.372 s
Press any key to continue.

*/
