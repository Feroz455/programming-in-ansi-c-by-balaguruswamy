/**
page 235
program 7.13
Write a program to read a matrix of size m * n and print its transpose
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int row,col,i,j;
        printf("Enter row and column number\n");
        scanf("%d %d",&row,&col);
        printf("Enter your matrix\n");


          int c[100][100];
          for( i = 0; i < col; i++)
          {
              for(j = 0; j < row; j++)
              {
                  scanf("%d",&c[i][j]);
                  // printf("%d\t",c[col][row]);
              }
          }
           for( i = 0; i < col; i++)
          {
              for(j = 0; j < row; j++)
              {
                  printf("%d\t",c[i][j]);
              }
              printf("\n");
          }

          printf("\n\n");
          ///transpose of matrix
            for( i = 0; i <row;  i++)
          {
              for(j = 0; j <col; j++)
              {
                  printf("%d\t",c[j][i]);
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
Enter row and column number
5
6
Enter your matrix
74 30 98 3 30 19 92 33 34 80 29 29 32 33 35 85 51 6 62 94 61 68 98 9 20 95 22 79 31 26
74      30      98      3       30
19      92      33      34      80
29      29      32      33      35
85      51      6       62      94
61      68      98      9       20
95      22      79      31      26


74      19      29      85      61      95
30      92      29      51      68      22
98      33      32      6       98      79
3       34      33      62      9       31
30      80      35      94      20      26
*/
