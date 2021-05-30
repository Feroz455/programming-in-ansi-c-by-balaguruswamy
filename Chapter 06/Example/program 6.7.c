/**
Program 6.7
The program in fig 6.8 shows how to write a program to display a pyramid

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

//main() function begin

int main()
{
         int num,i,y,x=40;

        printf("\nEnter a number for \ngenerating the pyramid:\n");
        scanf("%d",&num);
        for(y=0;y<=num;y++)
        {
        //gotoxy(x,y+1);
        for(i=0-y;i<=y;i++)
        printf("%3d",abs(i));
        printf("\n");
        x=x-3;
        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
12
  0
  1  0  1
  2  1  0  1  2
  3  2  1  0  1  2  3
  4  3  2  1  0  1  2  3  4
  5  4  3  2  1  0  1  2  3  4  5
  6  5  4  3  2  1  0  1  2  3  4  5  6
  7  6  5  4  3  2  1  0  1  2  3  4  5  6  7
  8  7  6  5  4  3  2  1  0  1  2  3  4  5  6  7  8
  9  8  7  6  5  4  3  2  1  0  1  2  3  4  5  6  7  8  9
 10  9  8  7  6  5  4  3  2  1  0  1  2  3  4  5  6  7  8  9 10
 11 10  9  8  7  6  5  4  3  2  1  0  1  2  3  4  5  6  7  8  9 10 11
 12 11 10  9  8  7  6  5  4  3  2  1  0  1  2  3  4  5  6  7  8  9 10 11 12
*/
