/**
page 322
programming Exercises 9.4
An n_order polynomial can be evaluated as follows:
p = (....(((a0*x+a1)*x+a2)*x+ a3)*x+...+an)
*/


///program begin
#include<stdio.h>
#include<conio.h>

///function prototype
void  polynomial(int index,int sum);
///Global variable
int array[] = {1,2,3,4,5};
int length = sizeof(array)/sizeof(array[0]);
int x;
//main() function begin

int main()
{
    printf("Enter the value of 'X'\n");
    scanf("%d",&x);
    polynomial(0,0);
    getch();
    return 0;
}
///main() end

//polynomial function begin
void  polynomial(int index,int sum)
{
    if(index == length-1)///recursive call break condition
    {
        sum = sum + array[index];
        printf("Sum : %d\n",sum);
        return;
    }

    sum  = sum + array[index];
    sum = sum * x;

    polynomial(index+1,sum); //recursively polynomial function call ..polynomial function call by itself
}
///polynomial function end



///program end

/**
output
Enter the value of 'X'
2
Sum : 57
Process returned -1073741819 (0xC0000005)   execution time : 2.656 s
Press any key to continue.


*/



/**
int main()
{
    int x[] = {1, 2, 3, 4, 5};
    int i;
    int sum = 0;
    for(i = 0; i <= 4; i++)
    {
        if(i == 4)
        {
            sum += x[i];

        }
        else
            if(i == 0)
        {
            sum += x[i]*2;

        }
        else
        {
            sum = (sum + x[i])*2 ;

        }
    }
    printf(" %d + ",sum);
	getch();
	return 0;
}
*/
