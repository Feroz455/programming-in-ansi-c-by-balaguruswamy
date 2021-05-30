/**
5.3 A set of two linear equation two unknows x1 and x2 is given below:
ax1 + bx2 = m
cx1 + dx2 = n
The set has a unique solution
x1=(md-bn)/(ad-cb)
x2=(na-mc)/(ad-cb)
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
        float x1,x2;
        int a,b,c,d,m,n,Dr;

        printf("Enter the value of a, b, c, d, m, n: ");
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
        Dr=(a*d-c*b);
        if(Dr!=0)
        {
        x1=(m*d-b*n)/Dr;
        x2=(n*a-m*c)/Dr;
        printf("\n The value of x1= %.2f \n The value of x2= %.2f",x1,x2);
        }
        else
        printf("The division is not possible and result is an abrupt value ");
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the value of a, b, c, d, m, n: 12 21 54 78 47 65

 The value of x1= -11.0
 The value of x2= 8.0
*/
