/**
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{

    int num, x = 0;


    printf("Enter a number \n");
    scanf("%d",&num);
   while(num != 0)
    {
        x +=num%10;
        num /= 10;
    }
    printf("Sum  of digit %d\n",x);
}
//main() end

///program end

/**
output
Enter a number
147852
Sum  of digit 27

Process returned 0 (0x0)   execution time : 2.695 s
Press any key to continue.
*/



