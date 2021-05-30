/**

Page 207
Program 7.6
Write a program to compute and print a multiplication table for numbers 1 to 5 as shown below

MULTIPLICATION TABLE
  1  2  3  4  5
1 1  2  3  4  5
2 2  4  6  8 10
3 3  6  9 12 15
4 4  8 12 16 20
5 5 10 15 20 25

The program shown in fig 7.6 uses two dimensional array to store the table values .Each value is
calculated using the control variables of the nested for loops as follows:
product[i] [j] = row * column

where i denotes rows and j denotes columns of the product table. Since the indexes i and j range from 0
to 4, we have  introduce the following transformation
row = i+1
column = j+1

*/


///program begin
#include<stdio.h>
#include<conio.h>


///Symbolic constant

/// Number of row
#define ROWS 9
///Number of COLUMNS
#define COLUMNS 10

//main() function begin

int main()
{
    int row, column, product[ROWS][COLUMNS];
    int i, j;

    printf("\n\nMULTIPLICATION TABLE\n\n");

    printf("  ");
    for(j = 1; j <= COLUMNS; j++)
    printf("%4d",j);
    printf("\n");

    printf("____________________________________________\n");
    for(i = 0; i < ROWS; i++)
    {
        row =1 + i;
        printf("%d|",row);
        for(j = 0; j < COLUMNS; j++)
        {
            column = j + 1;
            product[i][j] = row * column;
            printf("%4d",product[i][j]);
        }
        printf("\n");
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
MULTIPLICATION TABLE

     1   2   3   4   5   6   7   8   9  10
__________________________________________
1|   1   2   3   4   5   6   7   8   9  10
2|   2   4   6   8  10  12  14  16  18  20
3|   3   6   9  12  15  18  21  24  27  30
4|   4   8  12  16  20  24  28  32  36  40
5|   5  10  15  20  25  30  35  40  45  50
6|   6  12  18  24  30  36  42  48  54  60
7|   7  14  21  28  35  42  49  56  63  70
8|   8  16  24  32  40  48  56  64  72  80
9|   9  18  27  36  45  54  63  72  81  90
*/
