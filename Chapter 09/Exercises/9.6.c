/**
page 322
programming Exercises 9.6
Write a function that will round a floating point number to an indicated decimal place.For
example the number 17.457 would yield the value when its rounded off to two decimal places
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin
void Round(float);///without this prototype my program showing some unknown value
int main()

{
    float number ;
    printf("Enter a floating point number\n");
    scanf("%f",&number);
    Round(number);///Function call

	getch();
	return 0;
}
///main() end
void Round(float num)
{
    float n = num;
    printf("%.2f",n);
    return;
}
///program end

/**
output
Enter a floating point number
17.457
17.46
Process returned 0 (0x0)   execution time : 10.171 s
Press any key to continue.
*/
