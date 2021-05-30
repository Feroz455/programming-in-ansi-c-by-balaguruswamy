/**
page 450
program 13.2
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


///Structure defined
typedef struct
{
    char name[20];
    int age;
    float weight;
}DATA;
struct linked_list
{
    DATA person;
    struct linked_list *next;
};
typedef struct linked_list NODE;
typedef NODE *NDPTR;

void create(NODE *head);
void print(NODE *list);
int count(NODE *list);
int countAgeWeight(NODE *head,int  age ,float  weight);
NODE *edit(NODE *list);

//main() function begin

/*int main(int argc,char *argv[])
{
    NODE *head;
    int age;
    float weight;
    ///creating linked list
    head = (NODE *)calloc(1, sizeof(NODE));
    create(head);
    printf("\n\n\n");
    ///printing linked list
    print(head);
    printf("\n\n\n");
    ///counting total number of student into linked list
    printf("TOTAL ....Number of student \t ");
    printf("%d",1+count(head));
    printf("\n\n\n");
    ///counting student above age and weight
    printf("Enter specified 'AGE' and 'WEIGHT'\n\n To count the number of student above this age and weight\n\n\n");
    scanf("%d %f",&age,&weight);
    printf("Above %d old And above %.2f kg    = %d person\n\n",age, weight,1+countAgeWeight(head, age , weight));
    /// modify record into linked list
    printf("Modified linked list\n\n");
    head = edit(head);
///printing records after modified

    print(head);


    getch();
	return 0;
}*/
///main() end
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
        printf("%s %d %.2f\n\n",list->person.name, list->person.age,list->person.weight); ///printing data on screen
        if(list->next->next == NULL);/// if last node is null skip printing and breaking recursion
        print(list->next); ///calling itself
    }
}


///counting number of student above given age and weight
int countAgeWeight(NODE *list, int age,float weight)
{
     if(list->next->next == NULL)
    {
        return(0);if ///last node is null skip counting and breaking recursion
    }
     ///if age and weight is above given age and weight then plus 1 and call function
    if((list->person.age >= age) && (list->person.weight >= weight))
    return(1+countAgeWeight(list->next,age, weight));
    else
        ///else function call without incrementing
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
    if(strcmp(list->person.name, name) == 0)
    {
        printf("Match found!!!");
        printf("Enter modified AGE and Weight\t");
        scanf("%d %f",&list->person.age, &list->person.weight);
        return(list);
    }
    ///in our linked list last node is empty.
    ///so skip last node and stop recursion
    if(list->next->next == NULL)
    {
        printf("There is no such student in your list\n\n");
        return(list);
    }
    edit(list->next); ///calling itself
}
///edit function end here
///program end

/**
output
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



Firoz 24 80.00

Maliha 19 60.00

MOllika 19 56.00

Oishee 23 50.00

Sezoti 24 45.00




TOTAL ....Number of student      5


Enter specified 'AGE' and 'WEIGHT'

 To count the number of student above this age and weight


20
50
Above 20 old And above 50.00 kg    = 3 person

Modified linked list

Enter student name to edit details      Firoz
Match found!!!Enter modified AGE and Weight     25
75
Firoz 25 75.00

Maliha 19 60.00

MOllika 19 56.00

Oishee 23 50.00

Sezoti 24 45.00


Process returned 0 (0x0)   execution time : 45.591 s
Press any key to continue.
*/

