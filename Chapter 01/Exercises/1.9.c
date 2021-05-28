/*
page 20
1.9 Relationship between Celsius and Fahrenheit is governed by the formula
F = (9C/5) + 32;
C = ((F-32)*5)/9;
Write a program to convert the temperature
(a) from Celsius to Fahrenheit and
(b) from Fahrenheit to Celsius.
*/
//Program start from here
#include<stdio.h>
//Fahrenheit Function prototype
void Fahrenheit(float C);
void Celsius(float F);
int main()
{
    float F, C;
    printf("Enter temperature value in Fahrenheit\n");
    //Scanf Take input From use
    scanf("%f",&F);
    // Celsius(F); Function call here
    Celsius(F);
    printf("Enter temperature value in Celsius\n");
    //Scanf Take input From use
    scanf("%f",&C);
    //Fahrenheit Function call here
    Fahrenheit(C);
}

void Fahrenheit(float C)
{
    float F;
   // C = ((F-32)*5)/9;
    F = ((9*C/5) + 32);
    printf("%.2f Degree Celsius = %.2f Fahrenheit\n", C,F);
}
void Celsius(float F)
{
    float C;
    C = ((F-32)*5)/9;
    //F = ((9C/5) + 32);
    printf("%.2f  Fahrenheit = %.2f Degree Celsius\n", F,C);
}
/*
OutPut
Enter temperature value in Fahrenheit
97
97.00  Fahrenheit = 36.11 Degree Celsius
Enter temperature value in Celsius
36.11
36.11 Degree Celsius = 97.00 Fahrenheit

Process returned 0 (0x0)   execution time : 19.405 s
Press any key to continue.
*/

