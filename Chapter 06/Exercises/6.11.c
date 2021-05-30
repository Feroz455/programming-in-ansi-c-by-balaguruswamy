/**

*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
    int Num,Dig,Bin[10],i,Temp,Count;

    printf("Enter any Number:--\n");
    scanf("%d",&Num);
    Temp=Num;
    Count=0;
    while(Temp!=0)
    {
    Dig=Temp%2;
    Temp=Temp/2;
    Bin[Count]=Dig;
    Count++;
    }
    printf("Binary Number of Integer Number %d is \n",Num);
    for(i=(Count-1);i>=0;i--)
    printf("%d",Bin[i]);

	getch();
	return 0;
}
///main() end

///program end

/**
output

*/

