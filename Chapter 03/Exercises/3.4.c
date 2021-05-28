/**
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        int Len,Wid,Area,Peri;

        printf("Enter the length of the rectangle : ");
        scanf("%d",&Len);

        printf("Enter width of the rectangle : ");
        scanf("%d",&Wid);

        Peri= 2*(Len+Wid);
        Area= Len*Wid;

        printf("The perimeter of the rectangle is = %d \n",Peri);
        printf("The area of the rectangle is = %d \n",Area);

        getch();

        return 0;
}
//main() end

///program end

/**
output
Enter the length of the rectangle : 12
Enter width of the rectangle : 12
The perimeter of the rectangle is = 48
The area of the rectangle is = 144

*/


