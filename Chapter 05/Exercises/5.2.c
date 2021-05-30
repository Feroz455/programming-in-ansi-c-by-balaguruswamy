/**
5.2 Write a program to find the number of and sum of all integers greater than 100
and less than 200 that are divisible by 7.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
       int i, j=0;
       int count= 0;
       for(i = 100; i <= 200; i++)
       {
           if(i % 7 == 0)
           {
                 j +=i;
                 count++;
           }

       }
       printf("Sum of number divisible by %d\n",j);
       printf("Count = %d",count);

	getch();
	return 0;
}
///main() end

///program end

/**
output
Sum of number divisible by 2107
Count = 14
*/
