/**
Program 6.19
Modify the program of excise 6.16 to print the 0 instead of s at the center of the square as shown below
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
  int j,i;

    for (i=1;i<=5;i++)
    {
    for(j=1;j<=5;j++)
    {
        if( j == 3 && i == 3)
             printf("0 ");
        else
        printf("S ");
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

*/

