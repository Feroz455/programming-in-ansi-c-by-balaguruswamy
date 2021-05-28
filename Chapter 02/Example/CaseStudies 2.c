/**
2. Temperature Conversion problem

formula  c = (F -32 )/ 1.8
**/

///Program begin here

#include<stdio.h>
#define F_LOW 0
#define F_MAX 250
#define STEP 25

///main function start from here
int main()
{
    typedef float REAL;
    REAL fahrenheit, celsius;

    fahrenheit = F_LOW;
    printf("Fahrenheit Celsius\n\n");

    while(fahrenheit <= F_MAX)
    {
        celsius = (fahrenheit -32 )/ 1.8;
        printf("%5.1f  %7.1f\n\n",fahrenheit, celsius);
        fahrenheit += STEP;
    }
    ///loop end here
}
///program and main function end here
/**
OutPut
Fahrenheit Celsius

  0.0    -17.8

 25.0     -3.9

 50.0     10.0

 75.0     23.9

100.0     37.8

125.0     51.7

150.0     65.6

175.0     79.4

200.0     93.3

225.0    107.2

250.0    121.1


Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
**/

