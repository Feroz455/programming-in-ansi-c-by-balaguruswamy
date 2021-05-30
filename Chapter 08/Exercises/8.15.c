/**
page 269
program 8.15
Given a string
char str[] = "123456789"
Write a program that displays the following
                1
            2   3   2
        3   4   5   4   3
    4   5   6   7   6   5   4
5   6   7   8   9   8   7   6   5
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char str[] = "123456789";

    int i,j,k,track;

    for(i = 0; i<5; i++)
    {
        j = 0;
        while(j++<4-i)
            printf("  "); ///printing space before string

        for(j = 0, k=i, track = 0; j < 2*i+1 ; j++)//j is loop control variable /k is string control variable
          {                                          // track is k control variable variable//
             printf("%c ",str[k]);                    // j<2*i+1 is for how many times your loop will run
             if(track ++ < i)
                k++;
             else
                k--;
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
