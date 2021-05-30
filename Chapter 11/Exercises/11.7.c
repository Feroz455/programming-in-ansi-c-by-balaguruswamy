/**
page 394
programming Exercises 11.7
11.7 Write a program to read in an array of names and to sort them in alphabetical order
Use sort function that receives pointer to the function strcmp and swap. Sort in turn should call these function
via pointer;
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>

#define LENGTH 10
void sort();

void printArray(char *name[],int len);
//main() function begin

int main()
{

     char *name[LENGTH] = { "Firoz","Mahmud","Mahmuda","Rahman","Umme","kulsum","Shadin","checharji","Umar","Faruk"};

    printArray(name, LENGTH);
    printf("\n\n");
    sort(name,LENGTH);
    printf("Sorted Array\n\n");
    printArray(name, LENGTH);

	getch();
	return 0;
}
///main() end
void sort(char *array[], int size)
{
    int i , j;
  for( j = 0;  j < size; j++)
  {
        for( i=0; i<size-1; i++)
        {
            if(strcmp(array[i],array[i+1]) > 0)
            {
                char *tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
            }
        }
  }

}

///program end

void printArray(char *name[],int len)
{

    int i;
    for(i = 0; i < len; i ++)
    {
        printf("%s ", *(name+i));
    }
}


/**
output
Firoz
Mahmud
Mahmuda
Rahman
Umme
kulsum
Shadin
checharji
Umar
Faruk

*/
/*

#include <string.h>

#define LIMIT 10

void sortName(char name[][20]);
void dispName(char name[][20]);

int main()
{
	int i;
	char name[LIMIT][20];
	printf("Enter %d Names \n",LIMIT);
	for(i=0;i<LIMIT;i++)
		scanf("%s",*(name+i)+0);

	sortName(name);
	printf(" \nSorted Names \n");
	dispName(name);

	return 0;
}

void sortName(char name[][20])
{
	int i,j;
	for(i=0;i<LIMIT;i++)
	{
		for(j=0;j<LIMIT;j++)
		{
			if(strcmp(*(name+i),*(name+j)) < 0)
			{
				char temp[20];
				strcpy(temp,*(name+i));
				strcpy(*(name+i),*(name+j));
				strcpy(*(name+j),temp);
			}
		}
	}
}

void dispName(char name[][20])
{
	int i;
	for(i=0;i<LIMIT;i++)
		printf("%s \n",*(name+i));
}
*/
