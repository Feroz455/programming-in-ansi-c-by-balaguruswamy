/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin
int fact(int);
int main()
{
         float i,n;
        float e1,e2;

        printf("Enter No.");
        scanf("%f",&n);
        e2=1;
        e1=1;
        for(i=1;i<=n;i++)
        {
        e1=e1+((float)1/fact(i));///fact function call by value
        if((e1-e2)<0.00001)
        break;
        e2=e1;
        }
        printf("The value of e is : %f",e1);

        getch();
        return 0;
}
///main() end

///fact function declaration
int fact(int i)
{
    int fac, j;

    fac = 1;
    for(j = 1; j <= i; j++)
    {
        fac *= j;
    }
	getch();
	return fac;
}

///program end

/**
output
Enter No.2
The value of e is : 3.000000
Process returned 0 (0x0)   execution time : 24.450 s
Press any key to continue.
*/

