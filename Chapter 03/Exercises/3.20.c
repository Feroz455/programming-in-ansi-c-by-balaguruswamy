/**
3.20 Write a program to illustrate the use of cast operator in a real life situation.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int n,m,q, sum;

    printf("Enter three numbers\n\n");
    scanf("%d %d %d",&n,&m,&q);
    sum = n + m +q;
    printf("a = %d, b = %d, c = %d\n",n,m,q);

    printf("Average = %d\n",sum/3);

    printf("With  type cast\n");
     printf("Average = %.2f\n",(float)sum/3);



	getch();
	return 0;
}
//main() end

///program end

/**
output
Enter three numbers

45
57
95
a = 45, b = 57, c = 95
Average = 65
With  type cast
Average = 65.67

*/
