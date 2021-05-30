/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
         int i,age,c=0;

        for(i=1;i<=10;i++)
        {
        scanf("%d",&age);
        if (age>=50 && age<=60)
        c=c+1;
        }
        printf("The number of persons in the age group 50 to 60 are : %d",c);
	getch();
	return 0;
}
///main() end

///program end

/**
output
14 14 47 85 52 36 69 87 98
14
The number of persons in the age group 50 to 60 are : 1
Process returned 0 (0x0)   execution time : 10.365 s
Press any key to continue.

*/

