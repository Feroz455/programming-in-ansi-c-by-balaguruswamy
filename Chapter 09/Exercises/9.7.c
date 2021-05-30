/**
page 322
program 9.7
Write a function prime that return 1 if its argument is a prime number and return zero otherwise
*/

///program begin
#include<stdio.h>
#include<conio.h>

///prime function prototype
int prime(int);
//main() function begin

int main()
{
    int number;
    printf("Enter your number to check prime or not\n");
    scanf("%d",&number);
    int check = prime(number);
    printf("check = %d\n",check);
	getch();
	return 0;
}
///main() end
///Prime function begin here

int prime(int num)
{
    int i;
    int count = 0;
    for(i = 2; i < num-1; i++)
    {
        if(num %2 == 0)
        {
            count = 1;
            return (0);
        }
    }
    if(count == 0)
        return(1);
}
///program end

/**
output
Enter your number to check prime or not
56
check = 0

Process returned 0 (0x0)   execution time : 4.109 s
Press any key to continue.
***************************************************
output

Enter your number to check prime or not
11
check = 1

Process returned 0 (0x0)   execution time : 3.203 s
Press any key to continue.


*/
