/**
page 235
program 7.4

The following set of numbers is popularly known as Pascal's triangle
   1
   1       1
   1       2       1
   1       3       3       1
   1       4       6       4       1
   1       5      10      10       5       1
   1       6      15      20      15       6       1
   1       7      21      35      35      21       7       1
   1       8      28      56      70      56      28       8       1
   1       9      36      84     126     126      84      36       9       1

   if we denote rows by i and column by j , then any element (except the boundary element) in the triangle is given by
     P[i][j] = P[i-1][j-1] + P[i-1][j];
Write a program to calculate the element of the Pascal triangle for 10 rows and print the results
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int;
    int  i, j, n = 15, a[n][n];

    for(i = 1; i <=n; i++)
    {
         for(j = 1; j<=i; j++)
        {
            if( j == i || j == 1)
                a[i][j] = 1;
           else
           a[i][j] =  a[i -1][j-1] + a[i - 1][j];
        }
    }

     for(i = 1; i < n; i++)
    {
        for(j = 1; j <= i; j++)
          printf("%4d\t", a[i][j]);

        printf("\n");
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output
   1
   1       1
   1       2       1
   1       3       3       1
   1       4       6       4       1
   1       5      10      10       5       1
   1       6      15      20      15       6       1
   1       7      21      35      35      21       7       1
   1       8      28      56      70      56      28       8       1
   1       9      36      84     126     126      84      36       9       1
   1      10      45     120     210     252     210     120      45      10       1
   1      11      55     165     330     462     462     330     165      55      11       1
   1      12      66     220     495     792     924     792     495     220      66      12       1
   1      13      78     286     715    1287    1716    1716    1287     715     286      78      13       1
*/
