/**
4.5 write a program to demo the process of multiplication. The program should ask
the user to enter two digit integers and print the product to integers as shown
below
                45
        *       37
    -------------------
7x45 is         315
3x45 is         135
    ------------------
Add them        1665
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x,y;
    printf("Enter two integer two digit number\n");
    scanf("%2d %2d",&x,&y);
    printf("                %d\n",x);
    printf(" x              %d\n",y);
    printf("________________________\n");
    printf("%d x %d         %d\n",y%10,x,(y%10)*x);
    printf("%d x %d         %d\n",y/10,x,(y/10)*x);
    printf("________________________\n");
    printf("Add them      %d\n",x*y);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter two integer two digit number
45
37
                45
 x              37
________________________
7 x 45         315
3 x 45         135
________________________
Add them      1665

*/
