/**
page 21
1.12 A point on the circumference of a circle whose center is (0, 0) is (4, 5). Write
a program to compute perimeter and area of the circle.
*/
///Formula of compute perimeter =2 *M_PI* (sqrt((pow((x2-x1),2)) + (pow((y2-y1),2))))
///Formula of area = M_PI *(((pow((x2-x1),2)) + (pow((y2-y1),2))))

#include<stdio.h>
#include<math.h>
///Function prototyping
float Distance(int , int , int , int);
float Peremeter(int x1, int y1 , int x2, int y2);
float Area(int x1, int y1 , int x2, int y2);

///Main function from here
int main()
{

    int x1,y1,x2,y2;
    printf("Enter Coordinate of (x1,y1) (x2, y2)\n");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    //call Distance function in printf
    printf("Distance between two point = %.2f\n",Distance(x1,y1,x2,y2));
    //call Perimeter  function in printf
    printf("Perimeter = %.2f\n",Peremeter(x1,y1,x2,y2));
    //call Area function in printf
    printf("Area of Circle %.2f\n",Area(x1,y1,x2,y2));
    return 0;
}


///Distance Function definition
float Distance(int x1, int y1 , int x2, int y2)
{
    return sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
}


//float Peremeter() function definition
float Peremeter(int x1, int y1 , int x2, int y2)
{
    ///Formula of compute perimeter =2 *M_PI* (sqrt((pow((x2-x1),2)) + (pow((y2-y1),2))))
    return (2 *M_PI*(Distance(x1,y1,x2,y2)));
}

///float Area(); function definition
float Area(int x1, int y1 , int x2, int y2)
{
    ///Formula of area = M_PI *(((pow((x2-x1),2)) + (pow((y2-y1),2))))
    return (M_PI *(((pow((x2-x1),2)) + (pow((y2-y1),2)))));
}
/**
output:-
Enter Coordinate of (x1,y1) (x2, y2)
0 0 4 5
Distance between two point = 6.40
Perimeter = 40.23
Area of Circle 128.81

Process returned 0 (0x0)   execution time : 5.298 s
Press any key to continue.
**/
