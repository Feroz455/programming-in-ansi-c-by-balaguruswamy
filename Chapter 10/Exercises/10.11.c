/**
page 356
programing Exercises 10.11
10.11) Create two structures name metric and British which store the values of distance.
The metric structure store the values in meters and centimeters and British structure stores the values
in feet and inches.

Write a program that reads values for the structure variable and adds values
contained in one variable of metric to the content of another variable British.The program should display the result
in the from of feet and inches or meters and centimeters as required.
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct metric
{
    float meters;
    int centimeters;
};
struct British
{
    float feet;
    int inches;
};

struct metric inputMetric(struct metric m);
struct British inputeBritish(struct British b);

float ConvertMatricToBritish(struct metric m);
float ConvertBritishToMetric(struct British b);
//main() function begin

int main()
{
    struct metric m;
    struct British b;
    int ch;
    float mb =0, bm =0;


    printf("Metric TO British Press 1\n");
    printf("British To Metric Press 2\n");
    scanf("%d",&ch);


    if(ch == 1)
    {
        m = inputMetric(m);
        ConvertMatricToBritish(m);
    }
    else
        if(ch == 2)
    {
        b = inputeBritish(b);
       ConvertBritishToMetric(b);
    }
    else
        printf("WRONG CHOICES\nProgram will exit\n");
	getch();
	return 0;
}
///main() end
struct metric inputMetric(struct metric m)
{
    printf("Enter meter\n");
    scanf("%f",&m.meters);
    printf("Enter Centimeter\n");
    scanf("%d",&m.centimeters);
    if(m.centimeters > 100)
    {
        printf("Wanna convert centimeter to meter convertion ???");
        getch();
        exit(0);
    }
    return(m);

};
struct British inputeBritish(struct British b)
{
    printf("Enter Feet\n");
    scanf("%f",&b.feet);
    printf("Enter inches\n");
    scanf("%d",&b.inches);
    if(b.inches > 12)
    {
        printf("Wanna convert inches to feet convertion ???");
        getch();
        exit(0);
    }
    return(b);
};
float ConvertMatricToBritish(struct metric m)
{
   // float cm  =
    m.meters += ((float)m.centimeters/100);
    struct British b;
    b.feet = (m.meters * 3.28);

    int intpart = (int)b.feet;
    float decpart = b.feet - intpart;
    printf("%d feet %0.2f inches\n",intpart,decpart);
    return(b.feet);
};
float ConvertBritishToMetric(struct British b)
{
    struct metric m;
    b.feet +=((float)b.inches/10);
    m.meters = (b.feet*0.48);
    int intpart = (int) m.meters;
    float despart = m.meters - intpart;
    printf("%d meter %.2f centimeter\n",intpart,despart);
    return(m.meters);
};
///program end

/**
output
Metric TO British Press 1
British To Metric Press 2
2
Enter Feet
15
Enter inches
0
7 meter 0.20 centimeter

Process returned 0 (0x0)   execution time : 15.154 s
Press any key to continue.
**************************************************
Metric TO British Press 1
British To Metric Press 2
1
Enter meter
96
Enter Centimeter
0
314 feet 0.88 inches

Process returned 0 (0x0)   execution time : 6.656 s
Press any key to continue.
**************************************************
Metric TO British Press 1
British To Metric Press 2
1
Enter meter
9
Enter Centimeter
14
29 feet 0.98 inches

Process returned 0 (0x0)   execution time : 7.552 s
Press any key to continue.
*************************************************
Metric TO British Press 1
British To Metric Press 2
2
Enter Feet
75
Enter inches
9
36 meter 0.43 centimeter

Process returned 0 (0x0)   execution time : 17.799 s
Press any key to continue.
**************************************************
Metric TO British Press 1
British To Metric Press 2
1
Enter meter
96
Enter Centimeter
154
Wanna convert centimeter to meter convertion ???
Process returned 0 (0x0)   execution time : 9.991 s
Press any key to continue.
*/
