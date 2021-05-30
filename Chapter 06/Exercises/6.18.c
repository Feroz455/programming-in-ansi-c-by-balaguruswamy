/**
6.18 Write a program to print all integers that are not divisible by either 2 or 3 and lie
between 1 and 100. Program should also account the number of such integers and print
the result.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i,Count;

    Count=0;
    for(i=1;i<=100;i++)
        if(i%2!=0 && i%3!=0)
        {
        Count=Count+1;
        printf("%d ",i);
        }

        printf("\n%d\n",Count);
	getch();
	return 0;
}
///main() end

///program end

/**
output
1 5 7 11 13 17 19 23 25 29 31 35 37 41 43 47 49 53 55 59 61 65 67 71 73 77 79 83 85 89 91 95 97
33
*/

