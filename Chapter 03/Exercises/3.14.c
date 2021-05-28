/**
3.14 Write a program to read two integer values m and n and to decide and print whether m is
multiple of n.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int m,n,x;

        printf("Enter Two Numbers:--\n");
        scanf("%d %d",&m,&n);
         x=m%n;
        (x==0)?printf("m is multiple of n\n"):printf("m is not multiple of n\n");

        return 0;
}
//main() end

///program end

/**
output
Enter Two Numbers:--
25
5
m is multiple of n

Process returned 0 (0x0)   execution time : 2.649 s
Press any key to continue.
*/
