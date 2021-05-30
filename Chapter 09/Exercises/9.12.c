/**
page 322
programing exercise 9.12
9.12) Write a function that can be called to compute the product of two matrices of size m by n and n by m;
The main function provides the values for m and n and two matrices
*/

///program begin
#include<stdio.h>
#include<conio.h>
///global variable
int ROW;
int COLUMN;
///function prototyping of product
void product(int matrix1[][ROW], int matrix2[][ROW],int matrix3[][ROW]);
//main() function begin

int main()
{
    int i , j , k;
    printf("Enter raw number and COLUMN number\n");
    scanf("%d %d",&ROW, &COLUMN);
    int matrix1[ROW][COLUMN],matrix2[COLUMN][ROW],matrix3[ROW][COLUMN];

    printf("Enter your first matrix\n");

   for(i = 0; i< ROW; i++)
    {
        for(j = 0; j< COLUMN; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Enter your 2nd matrix\n");
    for(i = 0; i< ROW; i++)
    {
        for(j = 0; j< COLUMN; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
        printf("\n");
    }
///make 2nd transpose into matrix 3rd

   for(i = 0; i< ROW; i++)
    {
        for(j = 0; j< COLUMN; j++)
        {
            matrix3[i][j] = matrix2[j][i];
        }
        printf("\n");
    }
    product(matrix1, matrix2, matrix3);//product function call
	getch();
	return 0;
}
///main() end
///product function begin

void product(int matrix1[][ROW], int matrix2[][ROW],int matrix3[][ROW])
{
    int i, j, k ,sum;


    for(i = 0; i< ROW; i++)//for controlling  1st matrix
    {
         for(j = 0; j< COLUMN; j++)//for controlling  1st and 2nd matrix //first matrices row ...and 2nd matrices column
        {
            sum = 0;

            for(k = 0; k < ROW; k++)//for controlling 2nd matrix column
            {
                sum += (matrix1[i][k]*matrix3[j][k]); ///calculating sum
            }
                matrix2[i][j] = sum;///inserting product of 1stx2nd
        }
    }
    printf("Product of 1st and 2nd matrix\n");
    for(i = 0; i< ROW; i++)
    {
        for(j = 0; j< COLUMN; j++)
        {
            printf("%8d",matrix2[i][j]);
        }
        printf("\n");
    }

}

/**
output
Enter raw number and COLUMN number
4
4
Enter your first matrix
59 35 29 3

83 67 22 70

65 24 72 75

7 29 68 11

Enter your 2nd matrix
59 35 29 3

83 67 22 70

65 24 72 75

7 29 68 11





Product of 1st and 2nd matrix
    8292    5193    4773    4835
   12378    9952   10225    7359
   11032    7786   12697    8100
    7317    4139    6485    7272

Process returned 0 (0x0)   execution time : 14.958 s
Press any key to continue.
*/
