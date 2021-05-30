/**
page 322
program 9.11;
Write a function that can be called to find the largest element of an m by n matrix;
*/

///program begin
#include<stdio.h>
#include<conio.h>
void input(int , int);
//main() function begin

int main()
{
    int row, column;
    printf("number of row? ");
    scanf("%d",&row);

    printf("Number of column? ");
    scanf("%d",&column);

    input(row, column);//input function call to get input into matrix

	getch();
	return 0;
}
///main() end
void input(int row, int column)
{
    int matrix[row][column];
    int i, j, k;


    printf("Enter value of Matrix\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j < column; j++)
        {
                scanf("%d",&matrix[i][j]);
            if(i == 0 && j == 0)///first number into
            {
                k = matrix[i][j];
            }
            if(k < matrix[i][j]) ///comparing matrix value if k is smaller then the matrix[ith][jth] value then inter change;
            {
                k = matrix[i][j];
            }
        }

    }
    printf("Largest value into Matrix is %d\n",k);///printing largest number;
}
///program end

/**
output
number of row? 4
Number of column? 4
Enter value of Matrix
24 14 37 37
23 52 86 34
35 37 90 31
49 54 99 41
Largest value into Matrix is 99

Process returned 0 (0x0)   execution time : 5.143 s
Press any key to continue.

*/
