/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x,y,z;

    printf("Enter Three Values\n");
    scanf("%d%d%d",&x,&y,&z);

    printf(" x= %d",x);
    printf(" y= %d",y);
    printf(" z= %d\n",z);

    printf(" x= %5d y= %5d z= %5d\n",x,y,z);
    printf(" x= %d y= %d z= %d\n",x,y,z);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter Three Values
45
98
75
 x= 45 y= 98 z= 75
 x=    45 y=    98 z=    75
 x= 45 y= 98 z= 75
*/
