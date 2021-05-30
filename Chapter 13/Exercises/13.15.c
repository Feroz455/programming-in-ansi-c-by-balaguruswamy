/**
page 450
program 13.
13.

*/

///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/************************************/
///Structure define
typedef struct linked_list
{
    int number;
    struct linked_list *next;
    struct linked_list *pre;
}node;
node *tails,*head;


void create(node *list);
void print(node *list);
void reversePrint(node *list);
void insert(int num);
void find(node *list, int n);
void deleteNode(node *list);
void delete(node **head, int n);
/**********************************/
//main() function begin

int main(int argc,char *argv[])
{
    int key;
    head = (node *)calloc(1, sizeof(node));
    head->pre = NULL; ///First head node's pre will be null...before head node there is no data right???
    create(head); ///call create  . To create linked list
    print(head);
    printf("\n\n");
    reversePrint(tails);
    printf("\nEnter node value\n\n");
    scanf("%d",&key);
    find(head, key);
    insert(155);
    print(head);
    printf("\n\n");
    reversePrint(tails);
   deleteNode(head);
print(head);
    printf("\n\n");
    reversePrint(tails);
    printf("\n\n");
    print(head);
    getch();
	return 0;
}

void create(node *list)
{
    printf("Enter number (-999) to end \t");
    scanf("%d",&list->number);
    if(list->number == -999)
    {
        list->next = NULL;
        tails = list;///think recursively first. try to get else part
        /// encounter --999 put last nodes address into tails ///we are done here ..now do anything want you can do with your code
    }
    else
    {
        list->next = (node*)calloc(1, sizeof(node));
        list->next->pre = list; ///When ever \allocating space for new linked list ..put head value into pre.thats it..code is done
        create(list->next);
    }
}

void insert(int num)
{

    tails->next = (node *) calloc (1, sizeof(node));
    tails->next->number = num;
    tails->next->pre = tails->pre->next;
    tails->next->next = NULL;
    tails = tails->next;
    return;

}
void reversePrint(node *list)
{
    if(list->pre != NULL)
    {
        printf("%d-->", list->number);
        if(list->pre->pre == NULL)
        {
            printf("%d",list->pre->number);
            return;
        }
    }
    reversePrint(list->pre);
}
void print(node *list)
{
    if(list->next != NULL)
    {
        printf("%d-->",list->number);
        if(list->next->next == NULL)
        {
            printf("%d ",list->next->number);
            return;
        }
    }
    print(list->next);
}
void find(node *list, int n)
{
    int count = 0;
    while(list->next != NULL)
    {
        count++;
        if(list->number == n)
           {
                  printf("Match found\n\n");
                  printf("Node number = %d", count);
                  return;
           }
           list = list->next;
        }
    printf("Node not found\n\n");

}
void deleteNode(node *list)
{
    int n;
    node *ls;
    printf("Enter number to delete\n");
    scanf("%d",&n);
    if(head->number == n)
    {
        head->next->pre = NULL;
        ls = head;
        head = head->next;
        free(ls);
        return;
    }
        if(tails->number == n)
    {
        ls = tails->pre->next;
        tails->pre->next = NULL;
        tails = tails->pre;
        free(ls);
        return;
    }

        while(list->next != NULL)
        {
            if(list->number == n)
            {
                list->next->pre = list->pre;
                ls = list;
                list= list->next;
                delete(&head, n); /// dont mind ,, i know my logic is ok ..tails is working .
                ///.but some how head is not ...thats why i call another delete function
             //   free(ls);
                return;
            }
            list = list->next;
        }


}

void delete(node **head, int n)
{
    if((*head)->number == n)
    {
        node *p = *head;
        (*head) = (*head)->next;
        free(p);
        return;
    }
    else
    {
        delete(&((*head)->next),n);
    }
}


///program end

/**
output

*/
