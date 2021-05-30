/**
page 235
program 7.10
Develop a program to implement the binary search algorithm .This technique compares the
search key value with the value of the element that is midway in a sorted list.Then ;

a) If the match the search is over
b) if the search key value is less than the middle value then the first half of the list contain the key
    value
c) if the search key value is greater than the middle value ,then the second half contain the key value;


*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int i, j, key,n,inter,start,end,mid;
    printf("Enter how many number you want to insert into array \n\n");
    scanf("%d",&n);
    ///inserting numbers into n number of array
    int array[n];
    printf("Insert your number\n");
    for(i= 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
///printing array
    printf("\n");
    for(i= 0; i < n; i++)
    {
        printf("%4d",array[i]);
    }
    ///sorting array use bubble sort

    for(i = 0; i < n; i++)
    {
        for(j = 1; j < n-i; j++)
        if(array[j-1] > array[j])
        {
            inter = array[j-1];
            array[j-1] = array[j];
            array[j] = inter;
        }

    }
    ///printing array
    printf("\n");
    printf("sorted array \n");
    for(i= 0; i < n; i++)
    {
        printf("%4d",array[i]);
    }


///search key;

 printf("\n\nEnter your number to search\n");
    scanf("%d",&key);

    start = 0;
    end = n -1;
    mid = (start+end)/2;
    while(start <= end)
    {
        if(array[mid] < key)
        {
            start = mid+1;
        }
        else if(array[mid] == key)
        {
            printf("Number found at index Array[%d] = %d\n",mid+1, key);
            break;
        }
        else
        {
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    if(end < start)
    {
        printf("Number not found!!!");
    }

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
