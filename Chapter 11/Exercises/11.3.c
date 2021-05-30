/**
page 394
programming Exercises 11.3
11.3 Write a function that receives a sorted array of integers
and an integer value, and inserts the value in its correct place
*/

///program begin
#include<stdio.h>
#include<conio.h>
#define LIMIT 10
//main() function begin
void addValue(int *, int);
void Display(int *, int);
int main()
{
    int array[LIMIT+1] = {1,3,5,7,9,11,13,15,17,19};
    int nu;

    printf("Before insertion\n");
    Display(array, LIMIT);


    printf("Enter a value to insert: \t");
    scanf("%d",&nu);


    printf("After insertion\n");
    addValue(array, nu);


    Display(array,LIMIT+1);


	getch();
	return 0;
}
///main() end
void addValue(int *array, int key)
{
    int i = 0;
    while(*(array+i) < key) i++;
    int temp = *(array+i);
    *(array+i) = key;
    while(i++ <= LIMIT)
    {
        key = *(array+i);
        *(array+i) = temp;
        temp = key;
    }
}

void Display(int *array, int len)
{
    int i = 0;
    for(i = 0; i < len; i++)
    {
        printf("%d ",*(array+i));
    }
    printf("\n");
}
///program end

/**
output

*/
