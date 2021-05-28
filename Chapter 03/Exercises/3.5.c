/**
///BOSS PROGRAM XD
Given an integer number, write a program that display the number as follows
First line  : all digits
second line : all except first digit
third line : all except fast two digit
last line : the last digit

*/

///program begin
#include<stdio.h>

//main() function begin

int main()
{
    int num, x = 0,i, j;
    int a[100];

    printf("Enter a number \n");
    scanf("%d",&num);
   while(num != 0)
    {

        a[x] =  num % 10;
        ++x;
        num /= 10;
    }

    for (i = x; i >= 0; i--)
    {
        for (j = i-1; j >= 0; j-- )
        {
            printf("%d\t",a[j]);
        }
        printf("\n");
    }

}
//main() end

///program end

/**
output
Enter a number
5678
5       6       7       8
6       7       8
7       8
8


Process returned 0 (0x0)   execution time : 2.460 s
Press any key to continue.
*/

