/**
page 356
programing exercise 10.12
10.12) Define a structure named census with the following three members
* A Character array city[] to store names
* A long integer to store population of the city
* A float member to store the literacy level

Write a program to do the following

* To read details for 5 cities randomly using array variable
* To sort the list alphabetically
* To sort the list based on literacy level
* To sort the list based on population
* To display sorted lists
*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct census
{
    char name[50];
    long population;
    float literacy;
};
struct census input(struct census d[],int len);
void displayCensus(struct census d[],int len);
void sortByPopulation(struct census d[], int len);
void sortByName(struct census d[], int len);
void sortByLiteracy(struct census d[], int len);
void PrintNewLine(void);
void PrintDash(void);
void PrintHeaderMassage(void);
void pritnMenu();
struct census Choice(struct census d[],int len);

//main() function begin

int main()
{
    PrintNewLine();
    PrintDash();
    PrintDash();
    PrintHeaderMassage();
    int UserInput;
    int i;
    printf("Enter total city number\n");
    scanf("%d",&UserInput);///number of city// or structure array length

    struct census Ban[UserInput]; //
    Choice(Ban,UserInput);
	getch();
	return 0;
}
///user interaction happen here
struct census Choice(struct census d[],int len)
{
    int ck;
    while(1)
    {
        pritnMenu();
        PrintDash();
        PrintDash();
        printf("Enter your choice\n");
        scanf("%d",&ck);
        getchar();
        PrintDash();
        PrintDash();
        switch(ck)
        {
        case 1:
            printf("Valid choice NO 1.\n");
            input(d,len);
             PrintDash();PrintDash();
            displayCensus(d,len);
            PrintDash();PrintDash();
            break;
        case 2:
            printf("Valid choice NO 2.\n");
             PrintDash();PrintDash();
            displayCensus(d,len);
             PrintDash();PrintDash();
            break;
        case 3:
            printf("Valid choice NO 3.\n");
             PrintDash();PrintDash();
            sortByName(d,len);
            displayCensus(d,len);
             PrintDash();PrintDash();
            break;
        case 4:
            printf("Valid choice NO 4.\n");
             PrintDash();PrintDash();
            sortByPopulation(d,len);
            displayCensus(d,len);
             PrintDash();PrintDash();
            break;
        case 5:
            printf("Valid choice NO 4.\n");
             PrintDash();PrintDash();
            sortByLiteracy(d,len);
            displayCensus(d,len);
             PrintDash();PrintDash();
            break;
        case 6:
            exit(0);
        }
    }
};
///main() end
void pritnMenu()
{
    printf("\t1\t: INPUTE DATA\n"
           "\t2\t: DISPLAY DATA \n"
           "\t3\t: SORT BY NAME\n"
           "\t4\t: SORT BY POPULATION\n"
           "\t5\t: SORT BY LITERACY\n"
           "\t6\t: EXIT\n");
    return;
}
struct census input(struct census d[],int len)
{
    int i;
        for(i = 0; i < len; i++)
    {
        printf("Enter City name>>------------------------------------> ");
        gets(d[i].name);
        printf("Enter population of %s city>>---------------------> ",d[i].name);
        scanf("%ld",&d[i].population);
        printf("Literacy level of %s City>>-----------------------> ",d[i].name);
        scanf("%f",&d[i].literacy);
        getchar();
    }
};
void displayCensus(struct census d[],int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%20s    %20d     %20.2f\n",d[i].name, d[i].population, d[i].literacy);
    }
    return;
}
void sortByName(struct census d[], int len)
{
    int i,j;
    char tempN[50];
    int tempP;
    float tempL;
    for(i = 0; i < len; i++)
    {
        for(j = 1; j < len; j++)
        {
           if((strcmp(d[j].name,d[j-1].name) == 1))
            {
                strcpy(tempN,d[j].name);strcpy(d[j].name,d[j-1].name);strcpy(d[j-1].name,tempN);
                tempP = d[j].population; d[j].population = d[j-1].population; d[j-1].population =tempP;
                tempL= d[j].literacy; d[j].literacy = d[j-1].literacy; d[j-1].literacy =tempL;
            }
        }
    }
    return;
}
///program end
void sortByPopulation(struct census d[], int len)
{
    int i,j;
    char tempN[50];
    int tempP;
    float tempL;
    for(i = 0; i < len; i++)
    {
        for(j = 1; j < len; j++)
        {

            if(d[j].population > d[j-1].population)
            {
                strcpy(tempN,d[j].name);    strcpy(d[j].name,d[j-1].name);              strcpy(d[j-1].name,tempN);
                tempP = d[j].population;    d[j].population = d[j-1].population;        d[j-1].population =tempP;
                tempL= d[j].literacy;       d[j].literacy = d[j-1].literacy;            d[j-1].literacy =tempL;
            }
        }
    }
    return;
}
void sortByLiteracy(struct census d[], int len)
{
    int i,j;
    char tempN[50];
    int tempP;
    float tempL;
    for(i = 0; i < len; i++)
    {
        for(j = 1; j < len; j++)
        {

            if(d[j].literacy > d[j-1].literacy)
            {
                strcpy(tempN,d[j].name);strcpy(d[j].name,d[j-1].name);strcpy(d[j-1].name,tempN);
                tempP = d[j].population; d[j].population = d[j-1].population; d[j-1].population =tempP;
                tempL= d[j].literacy; d[j].literacy = d[j-1].literacy; d[j-1].literacy =tempL;
            }
        }
    }
    return;
}
void PrintNewLine(void);
void PrintDash(void);
void PrintHeaderMassage(void);
void PrintNewLine(void)
{
    int i;
    for(i = 0; i<20; i++)
        printf("\n");
}
void PrintDash(void)
{
    int i;
    for(i = 0; i< 72; i++)
    {
        printf("_");
    }
    printf("\n");
}
void PrintHeaderMassage(void)
{
    printf("CENSES STRUCT DISPLAY, MANIPULATE, SORT DATA \n");
}
/**
________________________________________________________________________
________________________________________________________________________
CENSES STRUCT DISPLAY, MANIPULATE, SORT DATA
Enter total city number
5
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
1
________________________________________________________________________
________________________________________________________________________
Valid choice NO 1.
Enter City name>>------------------------------------> Dhaka
Enter population of Dhaka city>>---------------------> 50000
Literacy level of Dhaka City>>-----------------------> 76.3
Enter City name>>------------------------------------> Narayanganj
Enter population of Narayanganj city>>---------------------> 50000
Literacy level of Narayanganj City>>-----------------------> 75.6
Enter City name>>------------------------------------> Kumilla
Enter population of Kumilla city>>---------------------> 32000
Literacy level of Kumilla City>>-----------------------> 80.2
Enter City name>>------------------------------------> CTG
Enter population of CTG city>>---------------------> 45000
Literacy level of CTG City>>-----------------------> 78.2
Enter City name>>------------------------------------> CoxBazzer
Enter population of CoxBazzer city>>---------------------> 4562
Literacy level of CoxBazzer City>>-----------------------> 12
________________________________________________________________________
________________________________________________________________________
               Dhaka                   50000                    76.30
         Narayanganj                   50000                    75.60
             Kumilla                   32000                    80.20
                 CTG                   45000                    78.20
           CoxBazzer                    4562                    12.00
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice

4
________________________________________________________________________
________________________________________________________________________
Valid choice NO 4.
________________________________________________________________________
________________________________________________________________________
               Dhaka                   50000                    76.30
         Narayanganj                   50000                    75.60
                 CTG                   45000                    78.20
             Kumilla                   32000                    80.20
           CoxBazzer                    4562                    12.00
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
3
________________________________________________________________________
________________________________________________________________________
Valid choice NO 3.
________________________________________________________________________
________________________________________________________________________
         Narayanganj                   50000                    75.60
             Kumilla                   32000                    80.20
               Dhaka                   50000                    76.30
           CoxBazzer                    4562                    12.00
                 CTG                   45000                    78.20
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
5
________________________________________________________________________
________________________________________________________________________
Valid choice NO 4.
________________________________________________________________________
________________________________________________________________________
             Kumilla                   32000                    80.20
                 CTG                   45000                    78.20
               Dhaka                   50000                    76.30
         Narayanganj                   50000                    75.60
           CoxBazzer                    4562                    12.00
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
1
________________________________________________________________________
________________________________________________________________________
Valid choice NO 1.
Enter City name>>------------------------------------> Dhaka
Enter population of Dhaka city>>---------------------> 45000
Literacy level of Dhaka City>>-----------------------> 75.6
Enter City name>>------------------------------------> Barishal
Enter population of Barishal city>>---------------------> 45000
Literacy level of Barishal City>>-----------------------> 82.1
Enter City name>>------------------------------------> Khulna
Enter population of Khulna city>>---------------------> 35000
Literacy level of Khulna City>>-----------------------> 75.2
Enter City name>>------------------------------------> Chottogram
Enter population of Chottogram city>>---------------------> 45000
Literacy level of Chottogram City>>-----------------------> 78.2
Enter City name>>------------------------------------> Momonshing
Enter population of Momonshing city>>---------------------> 23500
Literacy level of Momonshing City>>-----------------------> 45.2
________________________________________________________________________
________________________________________________________________________
               Dhaka                   45000                    75.60
            Barishal                   45000                    82.10
              Khulna                   35000                    75.20
          Chottogram                   45000                    78.20
          Momonshing                   23500                    45.20
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
5
________________________________________________________________________
________________________________________________________________________
Valid choice NO 4.
________________________________________________________________________
________________________________________________________________________
            Barishal                   45000                    82.10
          Chottogram                   45000                    78.20
               Dhaka                   45000                    75.60
              Khulna                   35000                    75.20
          Momonshing                   23500                    45.20
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
4
________________________________________________________________________
________________________________________________________________________
Valid choice NO 4.
________________________________________________________________________
________________________________________________________________________
            Barishal                   45000                    82.10
          Chottogram                   45000                    78.20
               Dhaka                   45000                    75.60
              Khulna                   35000                    75.20
          Momonshing                   23500                    45.20
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
2
________________________________________________________________________
________________________________________________________________________
Valid choice NO 2.
________________________________________________________________________
________________________________________________________________________
            Barishal                   45000                    82.10
          Chottogram                   45000                    78.20
               Dhaka                   45000                    75.60
              Khulna                   35000                    75.20
          Momonshing                   23500                    45.20
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
3
________________________________________________________________________
________________________________________________________________________
Valid choice NO 3.
________________________________________________________________________
________________________________________________________________________
          Momonshing                   23500                    45.20
              Khulna                   35000                    75.20
               Dhaka                   45000                    75.60
          Chottogram                   45000                    78.20
            Barishal                   45000                    82.10
________________________________________________________________________
________________________________________________________________________
        1       : INPUTE DATA
        2       : DISPLAY DATA
        3       : SORT BY NAME
        4       : SORT BY POPULATION
        5       : SORT BY LITERACY
        6       : EXIT
________________________________________________________________________
________________________________________________________________________
Enter your choice
6
________________________________________________________________________
________________________________________________________________________

Process returned 0 (0x0)   execution time : 271.051 s
Press any key to continue.
*/
