/**
5.5 Admission to a professional course in subject to the following conditions:
a) Marks in mathematics >=60
b) Marks in Physics >=50
c) Marks in Chemistry >=40
d) Total in all three subjects >=200
or
Total in mathematics and physics>=150.
Given the marks in the three subjects, write a program to process the applications
to the eligible candidates.
*/

///program begin
#include<stdio.h>
#include<conio.h>

//main() function begin

int main()
{
         int Maths,Phy,Chem,Total,Total_MP;

        printf("Enter the marks of maths :");
        scanf("%d",&Maths);
        printf("Enter the marks of phy :");
        scanf("%d",&Phy);
        printf("Enter the marks of chem :");
        scanf("%d",&Chem);
        Total=Maths+Phy+Chem;
        Total_MP=Phy+Maths;
        if (Maths>=60 && Phy>=50 && Chem>=40 && Total>=200)
        printf("The candidate is eligible for the admission");
        else
        {
        if(Total_MP>=150)
        printf("The candidate is eligible for the admission");
        else
         printf("The candidate is not eligible for the admission");
        }
	getch();
	return 0;
}
///main() end

///program end

/**
output
Enter the marks of maths :45
Enter the marks of phy :80
Enter the marks of chem :80
The candidate is not eligible for the admission
Process returned 0 (0x0)   execution time : 14.948 s
Press any key to continue.
*/
