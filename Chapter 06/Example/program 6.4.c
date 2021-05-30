/**
Program 6.4
The program in fig 6.5 shows how to write a c program to print all prime
numbers between 1 and n, where ‘n’ is the value supplied by the user.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
         int prime (int num);
            int n,i;
            int temp;
            printf("Enter the value of n: ");
            scanf ("%d", &n);
            printf("Prime numbers between 1 and %d are:\n",n);
            for (i=2; i<=n;i++)
            {
            temp=prime(i);
            if(temp==-99)
                 continue;
            else
            printf("%d\t", i);
            }
            getch();
            }
            int prime (int num)
            {
            int j;
            for (j=2;j<num; j++)
            {
            if(num%j==0)
            return (-99);
            else
            ;
            }
            if (j==num)
            return(num);
	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
