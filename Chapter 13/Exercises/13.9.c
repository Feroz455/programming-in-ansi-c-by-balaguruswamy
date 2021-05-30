/**
page 450
program 13.9
13.9 Write a function that would traverse a linear singly linked list in reverse and write out the contents
in reverse order

*/
///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct _node
{
    int number;
    struct _node *next;
};
typedef struct _node node;
/*********************************/
void create(node *list);
void print(node *list);
void reverse();
/********************************/
node *head;
int main()
{


    head = (node*) calloc(1, sizeof(node));

    create(head);
    print(head);
    printf("\n\n\n");
    reverse();
    print(head);

}


void create(node *list)
{
    printf("Enter a number\n\n");
    scanf("%d",&list->number);
    if(list->number == -999)
    {
        list->next = NULL;
        return;
    }
    else
    {
        list->next = (node*) calloc(1, sizeof(node));
        create(list->next);
    }
    return;
}

void reverse()
{
    node *current, *prev, *nxt;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    head = prev;
}

void print(node *list)
{

        if(list->next!= NULL)
        {
            printf("%d-->",list->number);
            if(list->next->next == NULL)
            {
                 printf("%d",list->next->number);
                 return;
            }
        }
        print(list->next);


}
///program end

/**
output

*/
