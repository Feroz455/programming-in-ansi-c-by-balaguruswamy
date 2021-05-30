/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int size,i,j;


    printf("Enter Square Matrix size\n");
    scanf("%d",&size);


    int num1[size][size], num2[size][size],result1[size][size],result2[size][size];
    printf("Enter First  %d*%d matrix\n",size,size);

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d",&num1[i][j]);
        }
    }
    printf("\nEnter second  %d*%d matrix\n",size,size);

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d",&num2[i][j]);
        }
    }
    ///A + B
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
           result1[i][j] = num1[i][j]+num2[i][2];
        }
    }

    ///A - B
     for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
           result2[i][j] = num1[i][j]-num2[i][2];
        }
    }

     ///A + B
     printf("A + B \n");
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
           printf("%4d",result1[i][j]);
        }
        printf("\n");
    }

    ///A - B
    printf("A - B \n");
     for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
           printf("%4d",result2[i][j]);
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
Enter Square Matrix size
4
Enter First  4*4 matrix
10 57 59 13
15 21 55 78
84 91 52 31
99 63 64 36

Enter second  4*4 matrix
81 42 41 14
53 77 37 47
63 35 63 92
9 47 98 5
A + B
  51  98 100  54
  52  58  92 115
 147 154 115  94
 197 161 162 134
A - B
 -31  16  18 -28
 -22 -16  18  41
  21  28 -11 -32
   1 -35 -34 -62
*/

