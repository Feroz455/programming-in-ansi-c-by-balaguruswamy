/**
5.13 Write a program to compute and display the sum of all integers that are divisible by 6
but not divisible by 4 and lie between 0 and 100. The program should also count and
display the number of such values.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int Sum,i,Count;

        Sum=Count=0;
        i=0;
    Loop:
        if((i%6==0)&&(i%4!=0))
        {
        printf("%d \n",i);
        Count=Count+1;
        Sum=Sum+i;
        }
        i=i+1;
        if(i<=100)
    goto Loop;
        printf("Sum of Numbers is %d\n",Sum);
        printf("Count of Numbers is %d\n",Count);
	getch();
	return 0;
}
///main() end

///program end

/**
output
6
18
30
42
54
66
78
90
Sum of Numbers is 384
Count of Numbers is 8

Process returned 0 (0x0)   execution time : 5.375 s
Press any key to continue.

*/
