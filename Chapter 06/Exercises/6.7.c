/**
6.7 Write a program to print the following outputs using for loops
a)
1 b)                         *          * * * * *
2 2                        * *            * * * *
3 3 3                    * * *              * * *
4 4 4 4                * * * *                * *
5 5 5 5 5            * * * * *                  *
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i,j,k;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1 ; j <= i; j++)
            printf("%d ",i);
        printf("\n");
    }
     printf("\n");
    for(i = 0; i <= 5; i++)
    {

       for(k = 0; k < i; k++)
        printf(" ");
        for(j = 5-i ; j >= 1; j--)
        {


             printf("*");printf(" ");
        }

        printf("\n");
    }
       for(i = 0; i <= 5; i++)
    {

       for(k = 0; k < i; k++)
        printf(" ");
        for(j = 5-i ; j >= 1; j--)
        {


             printf("*");
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
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

* * * * *
 * * * *
  * * *
   * *
    *

*****
 ****
  ***
   **
    *

*/

