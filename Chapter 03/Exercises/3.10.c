/**
3.10 For a certain electrical circuit with an inductance L and resistance R,the
damped natural frequency is given by frequency is
Frequency= sqrt((1/LC)-(R*R)/(4*C*C))
It is desired to study the variation of this frequency with c,write a program to
calculate the frequency for diff values of c starting from .01 to.10(interval is
.01).
*/

///program begin
#include<stdio.h>
#include<math.h>
#include<conio.h>

//main() function begin

int main()
{
    double L,R,C;
    double Freq,Temp1,Temp2;

    printf("Enter Inductance, Resistance, Capacitannce \n");
    scanf("%lf %lf %lf",&L,&R,&C);

    Temp1= (1/(L*C));

    Temp2= ((R*R)/(4*C*C));

    Freq= sqrt(Temp1-Temp2);

    printf("The Frequency is : %.2lf\n",Freq);
    getch();

    return 0;
}
//main() end

///program end

/**
output

Enter Inductance, Resistance, Capacitannce
2
2
4
The Frequency is : 0.25
*/
