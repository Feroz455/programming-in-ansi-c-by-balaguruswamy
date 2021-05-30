/**
program 7.4
Write a program using a two dimensional array to compute and print the following information from the table of data discussed above

a) Total value of sales by each girl
b) Total value of each item sold
c) Grand total of sales of all items by all girls

 */

///program begin
#include<stdio.h>
#include<conio.h>
///Symbolic constant
///Number of girl
#define MAXGIRL 4
///Number of items sold by a girl
#define MAXITEMS 3
//main() function begin

int main()
{
    int value[MAXGIRL][MAXITEMS];
    int girl_total[MAXGIRL], items_total[MAXITEMS];
    int i, j, grand_total = 0;

    ///Reading of values and computing GIRL_TOTAL

    printf("Input data\n");
    printf("Enter values, one at a time, row-wise\n\n");

    for(i = 0; i < MAXGIRL; i++)
    {
        girl_total[i] = 0;
        for(j = 0; j < MAXITEMS; j++)
        {
             scanf("%d",&value[i][j]);
            girl_total[i] = girl_total[i] + value[i][j];
        }

    }
    for(j = 0; j < MAXITEMS; j++)
    {
        items_total[j] = 0;
        for(i = 0; i < MAXGIRL; i++)
        items_total[j] = items_total[j] + value[i][j];
    }

    for(i = 0; i < MAXITEMS; i++)
        grand_total += items_total[i];

        printf("\n\nGIRL TOTAL\n\n");
    for(i = 0; i < MAXGIRL; i++)
        printf("Salesgirl[%d] = %d\n",i+1, girl_total[i]);

    printf("\n\nITEM TOTAL\n\n");
    for(i = 0; i < MAXITEMS; i++)
        printf("Item[%d] = %d\n",i+1, items_total[i]);

    printf("\n\nGRAND TOTAL  = %d\n\n",grand_total);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Input data
Enter values, one at a time, row-wise

310 257 365
210 190 325
405 235 240
260 300 380


GIRL TOTAL

Salesgirl[1] = 932
Salesgirl[2] = 725
Salesgirl[3] = 880
Salesgirl[4] = 940


ITEM TOTAL

Item[1] = 1185
Item[2] = 982
Item[3] = 1310


GRAND TOTAL  = 3477
*/
