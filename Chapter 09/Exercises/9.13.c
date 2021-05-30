/**
page 323
programing exercises 9.13
9.13) Design and code an interactive modular program that will use function to a matrix of m by n
size compute column averages and row average and then print the entire matrix with average
shown in respective row and column
*/

///program begin
#include<stdio.h>
#include<conio.h>
void input(int row, int col);
//main() function begin

int main()
{
    int i, j;
    int row, col;

    printf("Enter matrix row size and column size\n");
    scanf("%d %d",&row, &col);
    input(row, col);

	getch();
	return 0;
}
///main() end



void input(int row, int col)
{
    int matrix[row][col],i,j;
    float rave[row], cave[col];
    float average;
    printf("Enter your matrix\n");
    for(i = 0; i < row; i++)
    {
        rave[i] = 0;
        average = 0;
        for(j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
            average += matrix[i][j];
        }
        rave[i] = average/(float)col;

    }
    for(i = 0; i < row; i++)
    {
        cave[i] = 0;
        average = 0;
        for(j = 0; j < col; j++)
        {
            average += matrix[j][i];
        }
        cave[i] = average/(float)row;
    }


    printf("Printing matrix with there average\n");
    printf("End of the row has row wise average \n");
    printf("End of the column has column average\n\n\n");

    printf("______________________________________________\n");


    for(i = 0; i < row; i++)
    {
        for(j = 0; j< col; j++)
        {
            printf("%6d  ",matrix[i][j]);
        }
        printf("|%6.f  \n",rave[i]);
        printf("\n______________________________________________\n");
    }

    printf("______________________________________________\n");
    for(i =0; i < row; i++)
    {
        printf("%6.f  ",cave[i]);
    }

    printf("\n______________________________________________\n");
}
///program end

/**
output
Enter matrix row size and column size
4
4
Enter your matrix
83 67 22 70
65 24 72 75
7 29 68 11
37 52 8 32
Printing matrix with there average
End of the row has row wise average
End of the column has column average


______________________________________________
    83      67      22      70  |    61

______________________________________________
    65      24      72      75  |    59

______________________________________________
     7      29      68      11  |    29

______________________________________________
    37      52       8      32  |    32

______________________________________________
______________________________________________
    48      43      43      47
______________________________________________

Process returned 0 (0x0)   execution time : 29.490 s
Press any key to continue.

*/
