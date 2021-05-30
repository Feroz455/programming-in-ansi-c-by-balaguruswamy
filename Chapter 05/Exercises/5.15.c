/**
5.15 Write a program to read a double-type value x that represent angle in radians and a
character-type variable T that represents the type of trigonometric function and display
the value of
a) Sin(x), if s or S is assigned to T,
b) Cos(x), if c or C is assigned to T, and
c) Tan(x), if t or T is assigned to T.
Using (i) if……….else statement and (ii) switch statement.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>

//main() function begin

int main()
{
    printf("Using if else statement\n\n");
    {

        double x,Val;
        char T;
        Val=0;

        printf("Enter Angle:--\t");
        scanf("%lf",&x);
        ///to eat dummy space
        getchar();
        printf("\ns or S for Sin(x)");

        printf("\nc or C for Cos(x)");
        printf("\nt or T for Tan(x)");

        printf("\nEnter Choice\t");
        T=getchar();
        if((T=='s')||(T=='S'))
        Val=sin(x);
        else if((T=='c')||(T=='C'))
        Val=cos(x);
        else if((T=='t')||(T=='T'))
        Val=tan(x);
        else
        printf("\nWrong Input\n");
        printf("Value:--- %lf",Val);
    }

        printf("\n\nUsing Switch statement\n\n");

        {


            {
                double x,Val;
                char T;

                Val=0;
                printf("Enter Angle:--\n");
                scanf("%lf",&x);
                ///to eat dummy space
                getchar();
                printf("\ns or S for Sin(x) \ns or S for Cos(x) \ns or S for Tan(x)\nEnter Choice ");
                T=getchar();
                switch(T)
                {
                case 's':
                case 'S': Val=sin(x); break;
                case 'c':
                case 'C': Val=cos(x); break;
                case 't':
                case 'T': Val=tan(x); break;
                default:printf("\nWrong Input\n");
                }
                printf("Value:--- %lf\n",Val);
                getch();
}
        }

	getch();
	return 0;
}
///main() end

///program end

/**
output
Using if else statement

Enter Angle:--  45

s or S for Sin(x)
c or C for Cos(x)
t or T for Tan(x)
Enter Choice    t
Value:--- 1.619775

Using Switch statement

Enter Angle:--
45

s or S for Sin(x)
s or S for Cos(x)
s or S for Tan(x)
Enter Choice t
Value:--- 1.619775
*/
