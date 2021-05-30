/**
4.2 write a program to read values of x,y and print as
x+y/x-y         x+y/2        (x+y)(x-y)
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
         float x,y,a,b,c;


        printf("Enter x\n");
        scanf("%f",&a);

        printf("Enter y\n");
        scanf("%f",&y);

        a=((x+y)/(x-y));
        b=(x+y)/2;
        c=(x+y)*(x-y);
        printf("%.2f %.2f %.2f",a,b,c);


	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter x
45
Enter y
54
-1.00 27.00 -2916.00
*/
