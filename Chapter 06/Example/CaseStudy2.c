/**
2. Histogram
Problem: In an organization, the employees are grouped according to their basic pay for the purpose of
certain perks. The pay-range and the number of employees in each group are as follows:

Group           Pay-Range       Number of Employees

1 750-1500 12
2 1501-3000 23
3 3001-4500 35
4 4501-6000 20
5 above 6000 11

Draw a histogram to highlight the group sizes.
Problem Analysis: Given the size of groups, it is required to draw bars representing the sizes of various
groups. For each bar, its group number and size are to be written.

Program in fig 6.17 reads the number of employees belonging to each group and draws a histogram
The program uses four for loops and two if.....else statements.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define N 5

//main() function begin

int main()
{
        int value[N];
        int i, j, n, x;
        for (n=0; n < N; ++n)
        {
        printf("Enter employees in Group - %d : ",n+1);
        scanf("%d", &x);
        value[n] = x;
        printf("%d\n", value[n]);
        }
        printf("\n");
        printf("|\n");
        for (n = 0 ; n < N ; ++n)
        {
        for (i = 1 ; i <= 3 ; i++)
        {
        if ( i == 2)
        printf("Group-%1d |",n+1);
        else
        printf("|");
        for (j = 1 ; j <= value[n]; ++j)
        printf("*");
        if (i == 2)
        printf("(%d)\n", value[n]);
        else
        printf("\n");
        }
        printf("|\n");
        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter employees in Group - 1 : 12
12
Enter employees in Group - 2 : 23
23
Enter employees in Group - 3 : 35
35
Enter employees in Group - 4 : 20
20
Enter employees in Group - 5 : 11
11

        |
        |************
Group-1 |************(12)
        |************
        |
        |***********************
Group-2 |***********************(23)
        |***********************
        |
        |***********************************
Group-3 |***********************************(35)
        |***********************************
        |
        |********************
Group-4 |********************(20)
        |********************
        |
        |***********
Group-5 |***********(11)
        |***********
        |
*/

