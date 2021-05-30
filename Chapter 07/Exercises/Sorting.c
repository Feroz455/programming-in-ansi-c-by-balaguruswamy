/**
sorting array
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int n,i,t,j,k;
    printf("how many number you want to enter into your array ??\n");
    scanf("%d",&n);
    printf("Enter your Numbers\n");
    int Array[n];
    //putting array into array
    for(i = 0 ; i < n; i++)
    {
        scanf("%d",&Array[i]);
    }

    ///sorting array;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            //checking condition
            if (Array[i] < Array[j])
            {
                ///debuging perpase
                // printf("\nArray[%d] = %d < Array[%d] %d\t",i,Array[i], j , Array[j]);

            ///inter changing number place into array
                t = Array[i];
            Array[i] = Array[j];
            Array[j] = t;
            ///debuging perpase this section
           // printf("Array[%d] = %d \t\t",i,Array[i]);
            /*for(k = 0 ; k < n; k++)
                {
                   printf("%4d",Array[k]);
                }
                printf("\n");
*/
            }
            else continue;

        }
    }
    ///printing  array
    printf("\n\n");
    for(i = 0 ; i < n; i++)
    {
       printf("%4d",Array[i]);
    }

    ///sorting


	getch();
	return 0;
}
///main() end

///program end

/**
output

*/
