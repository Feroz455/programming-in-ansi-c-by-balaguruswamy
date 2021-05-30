/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

          int i,j,k;
            j=1;
        //first
        for(i=1;i<=3;i++)
        for(j=1;j<=18;j++)
        {
        printf("*");
        if(j==18)
        printf("\n");
        }
        //second
        for(i=1;i<=3;i++)
        for(j=1;j<=4;j++)
        {
        printf("*");
        if(j==4)
        printf("\n");
        }
        //3rd
        for(i=1;i<=3;i++)
        for(j=1;j<=18;j++)
        {
        printf("*");
        if(j==18)
        printf("\n");
        }
        //4th
        for(i=1;i<=3;i++)
        {
        for(k=1;k<=14;k++)
        printf(" ");
        for(j=15;j<=18;j++)
        {
        printf("*");
        if(j==18)
        printf("\n");
        }
        }
        for(i=1;i<=3;i++)
        for(j=1;j<=18;j++)
        {
        printf("*");
        if(j==18)
        printf("\n");
        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
******************
******************
******************
****
****
****
******************
******************
******************
              ****
              ****
              ****
******************
******************
******************
*/

