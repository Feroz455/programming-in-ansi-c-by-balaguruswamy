/**
page 212
Program 7.7
The program in fig 7.8 shows how to multiply the element of two N x N matrices
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int a1[10][10], a2[10][10], c[10][10];
    int i, j, k, a, b;
    printf("Enter the size of the square matrix\n");
    scanf("%d",&a);
    b = a;

    printf("You have to enter the matrix element in  row-wise fashion\n");
    printf("Enter First Matrix\n");
    for(i = 0; i < a; i++)
    {
        for(j=0; j < b; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
     printf("Enter 2nd Matrix\n");
    for(i = 0; i < a; i++)
    {
        for(j=0; j < b; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }



    printf("Entered matrix are\n\n");
     for(i = 0; i < a; i++)
    {
        for(j=0; j < b; j++)
        {
            printf("%d\t",a1[i][j]);
        }
         printf("\n");
    }

     printf("Enter 2nd Matrix\n");
    for(i = 0; i < a; i++)
    {
        for(j=0; j < b; j++)
        {
            printf("%d\t",a2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nProduct of the two matrix is\n\n");
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++){
                 c[i][j] =0;
        for(k = 0; k < a; k++)
        {
            c[i][j] = c[i][j] + a1[i][j] * a2[i][j];

        }
        }

    }
     for(i = 0; i < a; i++)
    {
        for(j=0; j < b; j++)
        {
            printf("%d\t",c[i][j]);
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
Enter the size of the square matrix
2
You have to enter the matrix element in  row-wise fashion
Enter First Matrix
12 23
45 56
Enter 2nd Matrix
78 89
85 52
Entered matrix are

12      23
45      56
Enter 2nd Matrix
78      89
85      52


Product of the two matrix is

1872    4094
7650    5824
*/
