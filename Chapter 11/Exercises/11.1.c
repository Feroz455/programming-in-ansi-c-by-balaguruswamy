/**
page 394
programming Exercises 11.
11.1 Write a program using pointers to read in an array of integers and print its element
in reverse order.
*/

///program begin
#include<stdio.h>
#include<conio.h>


//main() function begin

int main()
{
    int array[5];
    int i, *p;
    p = array;
    printf("Enter value\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",p++);
    }


    printf("Revers array number\n");

    for(i = 5; i > 0; i--)
    {
        printf("%d\n",*(--p));
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
