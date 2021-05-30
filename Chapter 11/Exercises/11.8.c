/**
page 394
programming Exercises 11.8
11.8 Given an array of sorted list of integer numbers, Write a function to search for a particular
item using the method of binary search. And also show how this function may be used in a program use
pointers and pointer arithmetic
*/

///program begin
#include<stdio.h>
#include<conio.h>
void search(int array[], int LENGTH);
//main() function begin

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,12};
    search(array, 10);
    getch();
    return 0;
}
///main() end
//Search function start from here.
void search(int *array, int LENGTH)
{

    int key,start = 0, end = LENGTH,mid;


    printf("Enter key value\n");
    scanf("%d",&key);

    while(!(start>end))
    {
        mid = (start+end)/2;
        if(*(array+mid) == key)
        {
            printf("Position  =  %d \nValue is = %d\n",mid+1,*(array+mid));
            return;
        }
        else if(key >*(array+mid))
        {
            start = mid+1;

        }
        else if(key < *(array+mid))
        {
            end = mid -1;
        }

    }
    printf("There is no such Value\n\n");
}
///program end

/**
output
///program end
Enter key value
12
Position  =  10
Value is = 12

Process returned 0 (0x0)   execution time : 9.284 s
Press any key to continue.
*/
