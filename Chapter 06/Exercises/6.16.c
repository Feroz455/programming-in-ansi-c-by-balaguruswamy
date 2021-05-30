/**
6.16 Write a program to print a square of size 5 by using the character S as shown below
a) S S S S S b) S S S S S
S S S S S       S       S
S S S S S       S       S
S S S S S       S       S
S S S S S       S S S S S
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
    printf("S ");
    printf("\n");
    }

printf("\n\n");

    for (i=1;i<=5;i++)
    printf("S ");

    for(j=2;j<=4;j++)
	{
    printf("\nS       S");
    }
    printf("\n");
    for (i=1;i<=5;i++)
    printf("S ");
	return 0;
}
///main() end

///program end

/**
output
S S S S S
S S S S S
S S S S S
S S S S S
S S S S S


S S S S S
S       S
S       S
S       S
S S S S S
Process returned 0 (0x0)   execution time : 0.021 s
Press any key to continue.
*/

