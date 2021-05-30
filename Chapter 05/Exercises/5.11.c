/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    float Len,Hei,Hyp;
    float Temp1,Temp2;

    printf("Enter Length Height and Hypotenes of Triangle-- ");
     scanf("%f %f %f",&Len,&Hei,&Hyp);

    Temp1=Hyp*Hyp;
    Temp2=Len*Len+Hei*Hei;

    if(Temp1==Temp2)
    printf("Triangle is Right Angle Triangle\n");
    else
    printf("Triangle is Not a Right Angle Triangle\n");

	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter Length Height and Hypotenes of Triangle-- 2
3
4
Triangle is Not a Right Angle Triangle
*/
