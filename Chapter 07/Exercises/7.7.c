/**
Tow matrices that have the same number of row and column can be multiplied to product a third matrix
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

//c[i][j] = a[i][k] * b[k][j];
    int a[10][10], b[10][10],c[10][10];
    int col,row,i, j, k;
    printf("Enter column number and row number\n");
    scanf("%d %d",&col,&row);

    ///reading first matrix
    printf("Enter value into First Matrix \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    ///reading 2nd mrtrix
    printf("Enter value into 2nd Matrix \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    ///putting product of a * b into array c
    ///product of two array
    for(j = 0; j < col; j++)

    {
         for(i = 0; i < row; i++)
        {
             k+= a[j][i] * b[i][j] ;
        }
        for( i = 0; i < row; i++)
            c[j][i] = k;
    }
///C matrix printing
printf("Product of Tow array \n\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
            printf("%4d  ",c[i][j]);
            printf("\n");
    }

    //product of Matrix



	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter column number and row number
4
4
Enter value into First Matrix
96 99 19 42
90 86 38 31
23 1 17 52
73 15 16 42
Enter value into 2nd Matrix
52 60 95 38
78 83 17 40
97 99 30 93
13 95 18 2
Product of Tow array

15103  15103  15103  15103
34348  34348  34348  34348
37996  37996  37996  37996
42942  42942  42942  42942
*/
