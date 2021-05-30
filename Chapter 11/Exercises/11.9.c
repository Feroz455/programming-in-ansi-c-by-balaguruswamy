/**
page 394
programming Exercises 11.9
11.9 Write a function (using pointer parameters) That reverses the element
of a given array .
*/

///program begin
#include<stdio.h>
#include<conio.h>
void reverse(int *a, int len);
//main() function begin

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int *a,i;
    a = array;
    for(i = 0; i < 10; i++)
    {
        printf("%d ", *a++);
    }
    reverse(a,10);
    getch();
	return 0;
}

///I really start enjoying pointer ..
//reverse function accept a pointer of integer.
void reverse(int *a, int len)
{
   printf("\nReverse array is \n");
     for(int i = 0; i < len; i++)
    {
        printf("%d ", *--a);
    }
}

///main() end

///program end

/**
output
1 2 3 4 5 6 7 8 9 10
Reverse array is
10 9 8 7 6 5 4 3 2 1
Process returned 0 (0x0)   execution time : 0.969 s
Press any key to continue.


*/
