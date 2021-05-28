/**
3.1 Given the values of the variables x, y and z, write a program to rotate their
values such that x has the value of y, y has the value of z and z has the value of x.
*/

//program begin

#include<stdio.h>

// main function begin

int mian()
        {
          int x,y,z,Temp;
        printf("Enter Three Values\n");
        scanf("%d%d%d",&x,&y,&z);
         printf(" x= %d \n y= %d \n z= %d",x,y,z);
        Temp=x;
        x=y;
        y=z;
        z=Temp;
        printf(" x= %d \n y= %d \n z= %d",x,y,z);
        getch();
}
///main end
///program end
