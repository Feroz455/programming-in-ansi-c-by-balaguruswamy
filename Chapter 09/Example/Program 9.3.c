/**
page 288
Program 9.3
In the program presented in Fig 9.7 modify the function value.To return the final amount calculated
to the main,which will display the required output at the terminal.Also extend the versatility of the function
print line by having it to take the length of the line as an argument
*/

///program begin
#include<stdio.h>
#include<conio.h>

//Function prototype

void printline(char ch, int len);
value (float, float,int);
//main() function begin

int main()
{
    float principal, inrate, amount;

    int period;

    printf("Enter principal amount, interest,");
    printf("rate and period\n");

    scanf("%f %f %d",&principal, &inrate, &period);

    printline('*',52);

    amount = value(principal, inrate, period);

    printf("\n%f\t%f\t%d\t%f\n\n",principal, inrate, period, amount);

    printline('=',52);

    getch();
	return 0;
}
///main() end


void printline(char ch, int len)
{
    int i;
    for(i = 1; i<=len; i++)
    {
        printf("%c",ch);
    }
    printf("\n");
}

value (float p, float r, int n) ///default return type
{
    int year;
    float sum;
    sum = p;
    year = 1;

    while(year <= n)
    {
        sum = sum * (1+r);
        year++;
    }
    return (sum);///returns int part of sum
}
///program end

/**
output
Enter principal amount, interest,rate and period
5000 0.12 5
****************************************************

5000.000000     0.120000        5       8811.000000

====================================================

Process returned 0 (0x0)   execution time : 13.053 s
Press any key to continue.
*/
