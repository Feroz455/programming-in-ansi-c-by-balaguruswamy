/**
5.1 Write a program to determine whether a given number is “odd” or “even” and print
the message
NUMBER IS EVEN
OR
NUMBER IS ODD
(a) Without using the else option.
(b) With else option.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//main() function begin
///function prototyping
void WithElse();
void WithoutElse();
int main()
{
    int a, b ;
    printf("Choose your option\n");
    printf("With else = 1 \t\t Without else = 2 \n");
    scanf("%d",&b);

     if(b == 1)
        WithElse();//function call
    else
        WithoutElse();//function call


	getch();
	return 0;
}
///main() end

///Without Else
void WithElse()
{
    int a;
    printf("WELLCOMME TO WITH ELSE SECTION !!!\n");
    printf("Enter your number\t");
    scanf("%d",&a);
    if( a % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
        printf("Number is odd\n");
}
///end withelse() function
//Without else  function begin
void WithoutElse()
{
     int a;
    printf("WELLCOMME TO WITHOUT ELSE SECTION !!!\n");
    printf("Enter your number\t");
    scanf("%d",&a);
    if( a % 2 == 0)
        printf("Number is even\n");

    if(a% 2 != 0)
        printf("Number is odd\n");
}
///end withoutelse() function
///program end

/**
output
Choose your option
With else = 1            Without else = 2
124
WELLCOMME TO WITHOUT ELSE SECTION !!!
Enter your number       14
Number is even

*/
