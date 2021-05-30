/**
Program 5.6
Write a complete C program that reads a value in the range of 1 to 12 and
print the name of that month and the next month. Print error for any other
input value.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//main() function begin

int main()
{


         char month[12][20] = {"January","February","March","April","May","June",
        "July","August","September","October","November","December"};
        int i;
        printf("Enter the month value: ");
        scanf("%d",&i);
        if(i<1 || i>12)
        {
        printf("Incorrect value!!\nPress any key to terminate the program...");
         getch();
            exit(0);
        }

        if(i!=12)
        printf("%s followed by %s",month[i-1],month[i]);

        else
        printf("%s followed by %s",month[i-1],month[0]);
        getch();
        exit(0);

	return 0;
}
///main() end

///program end

/**
output
Output
Enter the month value: 6
June followed by July
*/
