/**
page 442
CASE STUDIES 1
Insertion on a sorted list
The task of inserting a value into the current location in a sorted linked list involves two operation


1. Finding the node before which the new node has to be inserted. We call this node as key node.

2. Creating a new node with the value to be inserted and inserting the new node by manipulating pointer appropriately

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct linked_list
{
    int number;
    struct linked_list *next;
};
typedef struct linked_list node;


void create(node *p);
node *insert(node *p, int n);
void print(node *p);
//main() function begin


int main(int argc,char *argv[])
{
    int n;
    node *head;
    head = (node *)calloc(1, sizeof(node));
    create(head);
    printf("\n");
    printf("Original list\t");
    print(head);
    printf("\n\n");
    printf("\nInput number to be inserted:\t");
    scanf("%d",&n);
    head = insert(head, n);
    printf("\n\n");
    printf("New list:\t");
    print(head);

	getch();
	return 0;
}
///main() end
void create(node *list)
{
    printf("Input a number \n");
    printf("type -999 at end\n");
    scanf("%d",&list->number);
    if(list->number == -999)
    {
        list->next = NULL;
    }
    else ///create next node
    {
        list->next = (node *)calloc(1, sizeof(node));
        create(list->next);
    }
    return;
}
///Use iteration technique
void print(node *list)
{
    for(; list->next != NULL; list = list->next)
    {

            printf("%d-->",list->number);

            if(list->next->next == NULL)
            {
                printf("%d",list->next->number);

            }
    }

    return;
}
///Use recursive technique
/*
void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d--> ",list->number);

        if(list->next->next == NULL)
        {
            printf("%d",list->next->number);
        }
        print(list->next);

    }
    return;
}*/
node *insert(node *head, int x)
{
    node *p1, *p2, *p;
    p1 = NULL;
    p2 = head; /// p2 points to fist node


    for(; p2->number < x; p2 = p2->next)
    {
        p1 = p2;

        if(p2->next->next == NULL)
        {
            p2 = p2->next; /// insertion at end
            break;
        }
    }
    /**Key node found and inset new node*/
    p = (node *)calloc(1, sizeof(node));
    p->number = x; /// place value in the new node
    p->next = p2; /// link new node to key node
    if(p1 == NULL)
    {
        head = p; /// new node become
    }
    else
        p1->next = p; /// new node inserted in middel
    return(head);
}

///program end
/**
output
Input a number
type -999 at end
12
Input a number
type -999 at end
45
Input a number
type -999 at end
78
Input a number
type -999 at end
89
Input a number
type -999 at end
-999

Original list   12--> 45--> 78--> 89--> -999


Input number to be inserted:    20


New list:       12--> 20--> 45--> 78--> 89--> -999
Process returned 0 (0x0)   execution time : 38.927 s
Press any key to continue.
*/
