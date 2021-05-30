/**
page 323
Programing exercises 9.14
9.14) Develop a top down modular program that will perform the following tasks
a) Read two integer array with unsorted element
b) sort them in ascending order
c) Merge the sorted arrays
d) Print the sorted list
*/

///program begin
#include<stdio.h>
#include<conio.h>
int input(int array[]);
void BabbleSort(int array[],int len);
void printArray(int array[],int len);
int marchArray(int array[],int array2[],int len1,int len2);
//main() function begin
int main()
{
    int array[100],array2[100];
     int len, len2, len3;


     len = input(array);
     len2 = input(array2);


     BabbleSort(array,len);
     BabbleSort(array2,len2);


     printArray(array,len);
     printArray(array2,len2);


     len3 = marchArray(array, array2, len, len2);

     BabbleSort(array,len3);
     printArray(array,len3);
	getch();
	return 0;
}
///main() end
int input(int array[])
{
    int len,i;
    printf("Enter your array length\n");
    scanf("%d",&len);
    printf("Enter your array\n");
    for(i = 0; i < len; i++)
    {
        scanf("%d",&array[i]);
    }
    return (len);

}


void BabbleSort(int array[],int len)
{
    int i, j, temp;
    for(i = 0 ; i <len; i++)
    {
        for(j = 1; j < len; j++)
        {
            if(array[j-1] > array[j])
            {
                temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            }
        }
    }
    return;
}

void printArray(int array[],int len)
{
    int i;
    printf("\n");
    printf("\n");
    for(i = 0; i < len; i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
    printf("\n");
    printf("\n");
    return;

}

int marchArray(int array[],int array2[],int len1,int len2)
{
    int i;
    for(i = 0; i < len2; i++)
    {
        array[len1+i] = array2[i];
    }
    return (len1+len2);

}
///program end

/**
output
Enter your array length
10
Enter your array
21 71 75 8 24 65 28 56 48 34
Enter your array length
20
Enter your array
97 12 63 20 50 82 39 23 85 3
61 44 20 38 99 24 52 3 91 66

   8  21  24  28  34  48  56  65  71  75

   3   3  12  20  20  23  24  38  39  44  50  52  61  63  66  82  85  91  97  99

   3   3   8  12  20  20  21  23  24  24  28  34  38  39  44  48  50  52  56  61  63  65  66  71  75  82  85  91  97  99



Process returned 0 (0x0)   execution time : 137.240 s
Press any key to continue.
*/

/**
this is not working properly //// -_-
marching two sorted array
int main()
{
    int a[5] = {4,5,2,6,4}, b[5] = {7,5,9,2,1};
    int len = (sizeof(a) / sizeof(a[0]))+ (sizeof(b) / sizeof(b[0]))+ 1;
    int alen = (sizeof(a) / sizeof(a[0]));
    int  c[len];
    int i ,  j = 0, k = 0,l = 0;
    for(i = 0; i <= len; i++)
    {
        if( j  < alen)
        if(a[j] < b[k])
        {

            c[l] = a[j];

         printf("a[%d] = %d\t c[%d] = %d \n",j,a[j],l,c[l]);
           l++; j++;

        }

        if(a[j] > b[k])
        {

             c[l] = b[k];
               printf("b[%d] = %d\t c[%d] = %d \n",k,b[k],l,c[l]);
               l++;
               k++;
        }


    }

    for(i  = 0; i < len; i++)
    {
        printf("%d ",c[i]);
    }
	getch();
	return 0;
}
*/
