/**
page 322
program exercise  9.3
Use recursive function calls to evaluate
    f(x) = x - x^3/3!+ x^5/5!- x^7/7!+....
*/

///program begin
#include<stdio.h>
#include<conio.h>

///function prototype
int factorial(int n);
int  power(int base,int pow);
float calculation(void);

//main() function begin

int main()
{
    int track = 0;
    int i = 0,x, result = 0;

    printf("Enter value of 'X' :    ");
    scanf("%d",&x);


    for(i  = 0; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            if(track %2 == 0)
            {
                result += power(x,i)/factorial(i);//power function and factorial function call
                if(i == 1 )
                printf("(%d^%d / %d!)",x,i,i);
                else
                    printf(" +(%d^%d / %d!)",x,i,i);
            }
            if(track%2 == 1)
            {
                result -= power(x,i)/factorial(i);//power function and factorial function call
                printf("- (%d^%d / %d!)",x,i,i);
            }
            track++;///control + sing and - sing

        }


    }

    printf( " = %d\n" , result);




	getch();
	return 0;
}
///main() end
///factorial function
int factorial(int n)
{
    int fact = 0;

    if(n <= 1)
    {
        return (1);
    }
    else
        fact = n * factorial(n -1);
}

///power function
int power(int base,int pow)
{
     int value  = 1;

    if( power > 0)
    {
        while(pow--)
        {
             value  *=  base;
        }
        return (value);
    }
    if(power < 0)
    {
        while(pow++)
            value /= base;

        return (value);
    }

}
//
///program end

/**
output
Enter value of 'X' :    2
(2^1 / 1!)- (2^3 / 3!) +(2^5 / 5!)- (2^7 / 7!) +(2^9 / 9!) = 1

Process returned 0 (0x0)   execution time : 3.082 s
Press any key to continue.

*/
