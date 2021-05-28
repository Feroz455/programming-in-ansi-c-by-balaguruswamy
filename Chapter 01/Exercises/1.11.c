/*
page 23
1.11 Distance between two point (x1,y1) and (x , y ) is governed by the formula
    D^2 = (x – x1)^2 – y1)^2;
    write a program to compute D given the cordinates of the point.
*/

//Program start from here
#include<stdio.h>
//Function prototyping
float Distance(int , int , int , int);

//Main function from here
int main()
{

    int x1,y1,x2,y2;
    printf("Enter Coordinate of (x1,y1) (x2, y2)\n");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    //call Distance function in printf
    printf("Distance between two point = %.2f",Distance(x1,y1,x2,y2));
    return 0;
}
//Distance Function definition
float Distance(int x1, int y1 , int x2, int y2)
{
    return sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
}
/*
output
Enter Coordinate of (x1,y1) (x2, y2)
12 12 22 22
Distance between two point = 14.14
Process returned 0 (0x0)   execution time : 4.691 s
Press any key to continue.
*/

