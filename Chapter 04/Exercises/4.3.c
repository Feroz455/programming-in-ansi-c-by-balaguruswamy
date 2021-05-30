/**
4.3 Write a program to read the following numbers, round them off to the nearest
integer and print out the result as:
35.7 50.21 -23.73 -46.45
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int x,y,z;
        float a,b,c;

        printf(" Enter three value a, b, c:--\n");
        scanf(" %f %f %f",&a,&b,&c);

        x=round(a);
        y=round(b);
        z=round(c);
        printf("Values Are:-\n") ;
        printf("%d ",x);
        printf("%d ",y);
        printf("%d",z);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter three value a, b, c:--
741.963
123.654
789963.159
Values Are:-
742 124 789963
*/
