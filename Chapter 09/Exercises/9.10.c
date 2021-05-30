/**
page 322
Programing exercises 9.10

Develop a modular interactive program using function that reads the values of three sides
of a triangle and display either its area or its perimeter as per the request of the user.Given the three
sides a,b,c
where
perimeter = a + b + c;
area = sqrt((s-a)*(s-b)*(s-c));
s = (a+b+c)/2
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<math.h>
float perimeter(float , float , float);
float area(float, float, float);
float s(float , float , float);

void circle(float, float, float, char);
//main() function begin

int main()
{
       float a, b, c;
          char check;
    printf("Enter value of a = \t");
       scanf("%f",&a);

    printf("Enter value of b = \t");
       scanf("%f",&b);

    printf("Enter value of c = \t");
       scanf("%f",&c);
    getchar();
    printf("Enter your choice\n");
    printf("Perimeter  = p\n");
    puts("Area = A");
    puts("S = s");
    scanf("%c",&check);


    circle(a,b,c,check);

	getch();
	return 0;
}
///main() end
void circle(float a, float b, float c, char ck)
{
    char check = tolower(ck);
    switch(ck)
    {
    case 'p':
        printf("Perimeter = %.2f", perimeter(a,b,c));
        break;
    case 'a':
        printf("Area = %.2f", area(a,b,c));
        break;
    case 's':
        printf("S = %.2f", s(a,b,c));
        break;

    }
}
///program end

///Perimeter
float perimeter(float a, float b, float c)
{
    return(a+b+c);
}
///Area
float area(float a, float b, float c)
{
    float sa = s(a,b,c);
    return(sqrt((sa - a)* (sa - b) * (sa - c)));
}
///s
float s(float a, float b, float c)
{
    return((perimeter(a,b,c))/2);///function call perimeter  here
}
/**
output
Enter value of a =      2
Enter value of b =      4
Enter value of c =      7
Enter your choice
Perimeter  = p
Area = A
S = s
s
S = 6.50
Process returned 0 (0x0)   execution time : 7.463 s
Press any key to continue.
*/
