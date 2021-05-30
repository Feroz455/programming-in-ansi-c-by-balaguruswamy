/**
page 322
program 9.9
Develop a top_down modular program to implement a calculator.The program should request the user to input
two numbers and display one of the following as per the desire of the user

a) Sum of the number;
b) Difference of the numbers
c) Product of the numbers
d) Division of the numbers
*/

///program begin
#include<stdio.h>
#include<conio.h>

//SUM of number
int sum(int x, int y);
//Difference of number
int dif(int x, int y);
//product of number
int product(int x,int y);
///division of the number
int div(int x, int y);
void calculation(int x, int y, int c);
//main() function begin

int main()
{
   int x,  y;
   int  c;

   printf("Enter two integer number\n");
   scanf("%d %d",&x,&y);

   printf("Press \n");
   start:
   printf("sum = 1\nDifference = 2\nproduct = 3\nDivision = 4\n");
   scanf("%d",&c);

   if(c >0 && c < 4)
   calculation(x,y,c);
   else
   {
       printf("Invalid C's value Enter again\n");
       goto start;
   }
	getch();
	return 0;
}
///main() end
void calculation(int x, int y, int c)
{
    switch(c)
    {
    case 1:
        printf("%d + %d  = %d\n",x,y,sum(x,y));
        break;
    case 2:
        printf("%d - %d  = %d\n",x,y,dif(x,y));
        break;
    case 3:
        printf("%d * %d  = %d\n",x,y,product(x,y));
        break;
    case 4:
        printf("%d / %d  = %d\n",x,y,div(x,y));
        break;
    }
}

///sum
int sum(int x, int y)
{
    return(x+y);
}
//difference
int dif(int x, int y)
{
    return(x-y);
}
//product
int product(int x, int y)
{
    return(x*y);
}
///division

int div(int x, int y)
{
    return(x/y);
}
///program end

/**
output
Enter two integer number
12
4
Press
sum = 1
Difference = 2
product = 3
Division = 4
2
12 - 4  = 8

Process returned 0 (0x0)   execution time : 7.115 s
Press any key to continue.
*/
