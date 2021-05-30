/**
page 360
program 11.1
Write a program to print the address of a variable along with its value.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    char a;
    int x;
    float p,q;
    a = 'A';
    x = 125;
    p = 10.25;
    q = 18.76;

    printf("%c is stored at address %u\n",a,&a);
    printf("%d is stored at address %u\n",x,&x);
    printf("%f is stored at address %u\n",p,&p);
    printf("%f is stored at address %u\n",q,&q);

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
