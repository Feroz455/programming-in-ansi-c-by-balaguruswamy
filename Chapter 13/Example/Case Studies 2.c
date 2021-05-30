/**
page 446
Case studies 2.Building a sorted list
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

node *insert_sort(node *p, int n);
void print(node *p);

//main() function begin

int main(int argc,char *argv[])
{
    int n;
    node *head = NULL;
    printf("Input the list of numbers.\n");
    printf("At end, Type -999.\n\n");
    scanf("%d",&n);

    while(n != -999)
    {
        if(head == NULL)  /// create base node
        {
            head = (node *)calloc(1, sizeof(node));
            head->number = n;
            head->next = NULL;
        }
        else   ///Insert next item
        {
            head = insert_sort(head,n);
        }
            scanf("%d",&n);
    }
    printf("\n\n");
    print(head);
    printf("\n\n");

	getch();
	return 0;
}
///main() end
node *insert_sort(node *list, int x)
{
    node *p1, *p2, *p;
    p1 = NULL;
    p2 = list;
    for(; p2->number < x; p2 = p2->next)
    {
        p1 = p2;
        if(p2->next == NULL)
        {
            p2 = p2->next; ///p2 set to NULL
            break;         ///insert new node at end
        }
    }

    ///key node found
    p = (node*) calloc(1, sizeof(node));///space for new node
    p->number = x; /// place value in the new node
    p->next = p2;
    if(p1 == NULL)
    {
        list = p;   ///new node becomes first node
    }
    else
        p1->next = p; /// new node inserted after 1st node
    return(list);
}


void print(node *list)
{
    if(list == NULL)
    {
        printf("NULL");
    }
    else
    {
                printf("%d--> ",list->number);
                print(list->next);
    }
    return;


}
///program end

/**
output
Input the list of numbers.
At end, Type -999.

1
4
5
7
5
-999


1--> 4--> 5--> 5--> 7--> NULL


Process returned 0 (0x0)   execution time : 13.507 s
Press any key to continue.

*/
