/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int num,i,count=0;
    ///to check single number
    printf("Enter your number to check Prime or not\t");
    scanf("%d",&num);

    for(i = 2; i <= num; i++)
    {
        if(i == num)
        {
             printf("%d Prime \n\n",num);
        }
        else if(num % i == 0)
        {
            printf("%d Not a prime number\n\n",num);
            break;
        }


    }

    ///between 100 to 200
    for(num = 100; num <= 200; num++)
    {

     for(i = 2; i<=num; i++)
    {
        if(i == num)
        {
             printf("%d ",num);
             count++;
        }

        else if(num % i == 0)
             break;
    }
    if(count % 10 == 0)
        printf("\n");

    }
        printf("between 100 to 200 there is = %d prime number \n",count);



	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter your number to check Prime or not 2
2 Prime


101 103 107 109 113 127 131 137 139 149

151 157 163 167 173 179 181 191 193 197

199 between 100 to 200 there is = 21 prime number
*/
