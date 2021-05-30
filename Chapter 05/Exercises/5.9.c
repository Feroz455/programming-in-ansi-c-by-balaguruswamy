/**
5.9 Write a program that will read the value of x and evaluate the following function
        1 for x>0
   Y=   0 for x=0
        -1 for x<0
Using
(a) Nested if statements
(b) Else if statements
(c) Conditional operators
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int y;
    float x;
    printf("Enter the value of X: ");
    scanf("%f",&x);
    printf("Nested if statements\n");
    {
       if(x>0)
    {
    y=1;
    printf("The value of y for the given value of x=%.2f is %d\n",x,y);
    }
    else if(x==0)
    {
    y=0;
    printf("The value of y for the given value of x=%.2f is %d\n",x,y);
    }
    else
    {
    y=-1;
    printf("The value of y for the given value of x=%.2f is %d\n",x,y);
    }
    }
    printf("else if statements\n");
    {
            int y;
            float x;

            printf("Enter the value of X: ");
            scanf("%f",&x);
            if(x>0)
            {
            y=1;
            printf("The value of y for the given value of x=%.2f is %d\n",x,y);
            }
            else
            {
            if(x==0)
            {
            y=0;
            printf("The value of y for the given value of x=%.2f is %d\n",x,y);
            }
            else
            {
            y=-1;
            printf("The value of y for the given value of x=%.2f is %d\n",x,y);
            }
            }
    }

    printf("Conditional operator\n\n");
    {
        {
        int y;

        printf("Enter the value of X: ");
        scanf("%f",&x);
        (x>0?(y=1):(x==0)?(y=0):(y=-1));
        printf("The value of y for the given value of x=%.2f is %d\n",x,y);
        getch();
        }
    }


	getch();
	return 0;
}
///main() end

///program end

/**
Enter the value of X: 1
Nested if statements
The value of y for the given value of x=1.00 is 1
else if statements
Enter the value of X: 1
The value of y for the given value of x=1.00 is 1
Conditional operator

Enter the value of X: 1
The value of y for the given value of x=1.00 is 1

*/
