/**
page 214
Program 7.8
The program in fig 7.9 shows how to find the transpose of a matrix
*/

/**
Step 1 – Start
Step 2 – Read a 3 X 3 matrix (a[3][3])
Step 3 – Initialize the looping counter i = 0
Step 4 – Repeat Steps 5-9 while i<3
Step 5 – Initialize the looping counter j = 0
Step 6 – Repeat Steps 7-8 while j<3
Step 7 – b[i][j]=a[j][i]
Step 8 – j = j + 1
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i, j,a[3][3], b[3][3];

    printf("Enter a 3 x 3 Matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
   printf("\nEntered of a matrix");
    printf("\n");
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\nTranspose of a matrix");
    printf("\n");
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
    }
      for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%4d",b[i][j]);
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
  12  23  14
  25  36  54
  56  51  53


Entered of a matrix
  12  23  14
  25  36  54
  56  51  53


Transpose of a matrix
  12  25  56
  23  36  51
  14  54  53
*/
