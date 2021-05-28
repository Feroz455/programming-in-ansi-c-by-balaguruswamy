/**
3.19 Write a program that determines whether a given integer is odd or even and displays the number
and description on the same line.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x;
    printf("Press 0 to EXIT\nEnter a number to check ODD or Even\n\n ");
    scanf("%d",&x);
    while(x != 0)
    {
        if(x % 2 == 0)
            printf("Even\n");
        else
            printf("ODD\n");
         printf("Press 0 to EXIT\nEnter a number to check ODD or Even\n\n ");
         scanf("%d",&x);
    }
    printf("Thanks For Using me!! ;) \n\n");

	getch();
	return 0;
}
//main() end

///program end

/**
output
Press 0 to EXIT
Enter a number to check ODD or Even

 45
ODD
Press 0 to EXIT
Enter a number to check ODD or Even

 12
Even
Press 0 to EXIT
Enter a number to check ODD or Even

 65
ODD
Press 0 to EXIT
Enter a number to check ODD or Even

 45
ODD
Press 0 to EXIT
Enter a number to check ODD or Even

 21
ODD
Press 0 to EXIT
Enter a number to check ODD or Even

 -78
Even
Press 0 to EXIT
Enter a number to check ODD or Even

 -77
ODD
Press 0 to EXIT
Enter a number to check ODD or Even

 0
Thanks For Using me!! ;)
*/
