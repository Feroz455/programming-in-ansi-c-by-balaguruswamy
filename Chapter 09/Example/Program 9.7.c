/**
page 299
Program 9.7
Write a program that uses a function to sort an array of
integers
*/

///program begin
#include<stdio.h>
#include<conio.h>


void sort(int m, int x[]);
//main() function begin

int main()
{
    int i;
    int marks[5] = {40, 90, 73, 81, 35};

    printf("Marks before sorting\n");
    for(i = 0; i < 5; i++)
    {
        printf("%4d",marks[i]);
    }
    printf("\n\n");

    sort(5, marks);

    printf("Marks after sorting\n");

    for(i = 0; i < 5; i++)
    {
        printf("%4d ",marks[i]);
    }
    printf("\n");
	getch();
	return 0;
}
///main() end


///Sorting function start

void sort(int m, int x[])
{
    int i, j, t;
    for(i = 0; i<m; i++)
    {
        for(j = 1; j<m-i; j++)
        {
            if(j[x-1] >= x[j])
            {
                t = x[j-1];
                x[j-1] = x[j];
                x[j] = t;
            }
        }
    }
}

///program end

/**
output
Marks before sorting
  40  90  73  81  35

Marks after sorting
  35   40   73   81   90

Process returned 0 (0x0)   execution time : 1.859 s
Press any key to continue.

*/
