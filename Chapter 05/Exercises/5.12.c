/**
5.12 An electricity board charges the following rates for the use of electricity:
For the first 200 units; 80 P per unit
For the next 100 units; 90 P per unit
Beyond 300 units; Rs. 1 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more
than Rs. 400, then an additional surcharge of 15% of total amount is charged.
Write a program to read the names of users and number of units consumed and printout
the charges with names.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
     int Units;
    char Name[20];
    float Charge;
    printf("Enter Name of User:--\n");
    scanf("%s",Name);

    printf("Enetr Total Units Consumed\n");
    scanf("%d",&Units);

    if(Units>=0&&Units<=200)
    Charge=100+(Units*0.80);
    else if(Units>200&&Units<=300)
    Charge=100+(Units*0.90);
    else if(Units>300&&Units<=400)
    Charge=100+Units;
    else
    Charge=(100+Units)+(100+Units)*15;
    printf("Name Units Charge\n");
    printf("%s %d %.2f",Name,Units,Charge);
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter Name of User:--
Firoz_Mahmud
Enetr Total Units Consumed
456
Name Units Charge
Firoz_Mahmud 456 8896.00
*/
