/**
page 450
program exercises 13.2
Write a menu driven program to create a linked list of a class of students and perform
the following operation
a) Write out the content of the list
b) Edit the details of a specified student
c) Count the number of student above a specified age and weight

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/********************************************/
///Structure defined
typedef struct
{
    char name[20];
    int age;
    float weight;
}   DATA;

struct linked_list
{
    DATA person;
    struct linked_list *next;
};

typedef struct linked_list NODE;
typedef NODE *NDPTR;


/********************************************/
///Function section
void create(NODE *head);
void print(NODE *list);
int count(NODE *list);
int countAgeWeight(NODE *head,int  age ,float  weight);
NODE *edit(NODE *list);
void printNewline(void );
void manu(NODE *head);
void printline(void);
void displayManu(void );
/************************************************/

//main() function begin

int main(int argc,char *argv[])
{
    NODE *head;
    head = (NODE *)calloc(1, sizeof(NODE));
    manu(head);
	return 0;
}
///main() end
void manu(NODE *head)
{
        int i;
        printNewline();
    while(1)
        {
        printline();
        printline();
        displayManu();
        printf("ENTER YOUR OPTION\n\n");
        scanf("%d",&i);
        printline();
        printline();
        switch(i)
        {
        case 1:
            printf("Valid Input\nCreate a Student list\n");
            create(head);
            break;
        case 2:
            printf("Valid Input\nCount Total Student\n");
            printf("%d",1+count(head));
            break;
        case 3:
            printf("Valid Input\nPrint list\n");
            print(head);
            break;
        case 4:
            printf("Valid Input\nGet number of Student by 'AGE' and 'WEIGHT'\n");
            int age;
            float weight;
            ///counting student above age and weight
            printf("Enter specified 'AGE' and 'WEIGHT'\n");
            scanf("%d %f",&age,&weight);
            printf("Above %d old And above %.2f kg "
                   "   =%d person\n\n",age,
                    weight,countAgeWeight(head, age , weight));
            break;
        case 5:
            printf("Valid Input\nEdit Details of a Student\n");
            printf("Modified linked list\n\n");
            head = edit(head);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Wrong input\nTry again");
            break;
        }
    }
}
void displayManu(void )
{
       printf("1\tCreate a Student list\n"
               "2\tCount Total Student\n"
               "3\tPrint list\n"
               "4\tGet number of Student by 'AGE' and 'WEIGHT'\n"
               "5\tEdit Details of a Student\n"
               "6\tEXIT\n"
               );
}
void printline(void )
{
        printf("\n");
        int i;
        for(i = 0; i < 56; i++)
        {
        printf("_");
        }
        printf("\n");
}
void printNewline(void)
{
        int i;
        for(i = 0; i < 10; i++)
        {
        printf("\n");
        }
}
///putting data into linked list
void create(NODE *list)
{
        ///scanning name ..if name is end then recursion going to break.
        printf("Enter name, age and weight\n\nType Name  'end' to end input\n\n\n");
        scanf("%s",list->person.name);///other data scanning into else part


        if(strcmp((list->person.name),"end") == 0)
        {
        list->next = NULL;

        }
        else
        {
        ///scanning here into else part
        scanf("%d %f",&list->person.age,&list->person.weight);
        ///calloc make space and initialize variable with null every  .
        list->next = (NODE *)calloc(1, sizeof(NODE));
        create(list->next);
        }

        return;
}

        ///Printing data into screen
void print(NODE *list)
{
        if(list->next != NULL)
        {
        ///printing data on screen
        printf("%s %d %.2f\n\n",list->person.name, list->person.age,list->person.weight);
        /// if last node is null skip printing and breaking recursion
        if(list->next->next == NULL);
        print(list->next); ///calling itself
        }
}


        ///counting number of student above given age and weight
int countAgeWeight(NODE *list, int age,float weight)
{

        if(list->next->next == NULL)
        {
        ///if last node is null skip counting and breaking recursion
        return(0);

        }

         ///if age and weight is above given age and weight then plus 1 and call function
        if((list->person.age >= age) && (list->person.weight >= weight))
        return(1+countAgeWeight(list->next,age, weight));


         ///else function call without incrementing
        else
        return(countAgeWeight(list->next,age, weight));

}
        ///counting function end here


        ///counting total number of student in our linked List
int count(NODE *list)
{
        if(list->next->next == NULL)
        {
        return(0);
        }
        return(1+count(list->next));
}
        ///counting end here


        ///edit function return a pointer of type NODE
NODE *edit(NODE *list)
{
        char name[20];
        printf("Enter student name to edit details \t");
        scanf("%s",name);

        while(list->next->next != NULL)
        {
            if(strcmp(list->person.name, name) == 0)
            {
            printf("Match found!!!");
            printf("Enter modified AGE and Weight\t");
            scanf("%d %f",&list->person.age, &list->person.weight);
            return(list);
            }
            list = list->next;
        }



        printf("There is no such student in your list\n\n");
        return(list);
}
        ///edit function end here
        ///program end

/**
output

________________________________________________________
1       Create a Student list
2       Count Total Student
3       Print list
4       Get number of Student by 'AGE' and 'WEIGHT'
5       Edit Details of a Student
6       EXIT
ENTER YOUR OPTION

1

________________________________________________________

________________________________________________________
Valid Input
Create a Student list
Enter name, age and weight

Type Name  'end' to end input


Firoz 24 80.00
Enter name, age and weight

Type Name  'end' to end input



Maliha 19 60.00
Enter name, age and weight

Type Name  'end' to end input



MOllika 19 56.00
Enter name, age and weight

Type Name  'end' to end input



Oishee 23 50.00
Enter name, age and weight

Type Name  'end' to end input



Sezoti 24 45.00
Enter name, age and weight

Type Name  'end' to end input


end

________________________________________________________

________________________________________________________
1       Create a Student list
2       Count Total Student
3       Print list
4       Get number of Student by 'AGE' and 'WEIGHT'
5       Edit Details of a Student
6       EXIT
ENTER YOUR OPTION

2

________________________________________________________

________________________________________________________
Valid Input
Count Total Student
5
________________________________________________________

________________________________________________________
1       Create a Student list
2       Count Total Student
3       Print list
4       Get number of Student by 'AGE' and 'WEIGHT'
5       Edit Details of a Student
6       EXIT
ENTER YOUR OPTION

5

________________________________________________________

________________________________________________________
Valid Input
Edit Details of a Student
Modified linked list

Enter student name to edit details      Firoz
Match found!!!Enter modified AGE and Weight     75
50

________________________________________________________

________________________________________________________
1       Create a Student list
2       Count Total Student
3       Print list
4       Get number of Student by 'AGE' and 'WEIGHT'
5       Edit Details of a Student
6       EXIT
ENTER YOUR OPTION

3

________________________________________________________

________________________________________________________
Valid Input
Print list
Firoz 75 50.00

Maliha 19 60.00

MOllika 19 56.00

Oishee 23 50.00

Sezoti 24 45.00


________________________________________________________

________________________________________________________
1       Create a Student list
2       Count Total Student
3       Print list
4       Get number of Student by 'AGE' and 'WEIGHT'
5       Edit Details of a Student
6       EXIT
ENTER YOUR OPTION

4

________________________________________________________

________________________________________________________
Valid Input
Get number of Student by 'AGE' and 'WEIGHT'
Enter specified 'AGE' and 'WEIGHT'
40
50
Above 40 old And above 50.00 kg    =1 person


________________________________________________________

*/
