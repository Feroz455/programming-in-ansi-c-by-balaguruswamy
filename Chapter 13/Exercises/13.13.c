/**
page 450
program 13.13
13.13 Write a function that takes a specified node of a linked list and makes it as its last node.
*/
///ha ha ha ha ..
///program begin
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct _node
{
    int number;
    struct _node *next;
};
typedef struct _node node;
/****************************************/

void create(node *list);
void print(node *list);
node *MakeLast(node **list,int n);
node *head;
node *lastNode(node *list);
/************************************/
///main function begin here
int main()
{


    head = (node*) calloc(1, sizeof(node));

    create(head);
    print(head);
    printf("\n\nEnter number you want to Make last node\n");
    int i;
    scanf("%d",&i);
    node *TergetNode =  MakeLast(&head, i);
    ///first i think like this ... -_- don't laugh at me .....
    ///i know it was such a foolish thinking
    /// printf("-->%d\n",last->number);
    node *ls = lastNode(head);
    ls->next = TergetNode;
    ///target node or (Now last node) should not point any node
    TergetNode->next = NULL;
    print(head);
    getch();
    return 0;
}

void create(node *list)
{
    int n;
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
node *MakeLast(node **list,int n)
{
    if((*list)->number == n)
    {
        printf("Found\n");
        /// i need this address to make last node
        node *p = (*list);
        ///Skip target node
        (*list) = (*list)->next;
        return(p);
    }
    MakeLast((&(*list)->next),n);
}

/// for last node address
node *lastNode(node *list)
{
    if(list ==  NULL)
    {
        return(NULL);
    }
    while(list != NULL)
    {
        if(list->next == NULL)
        {
            return(list);
        }
         list = list->next;
    }
}

///program end
/**
output
Enter a number

1
Enter a number

2
Enter a number

3
Enter a number

4
Enter a number

5
Enter a number

6
Enter a number

7
Enter a number

8
Enter a number

9
Enter a number

-99
Enter a number

-999
1-->2-->3-->4-->5-->6-->7-->8-->9-->-99-->-999

Enter number you want to Make last node
-99
Found
1-->2-->3-->4-->5-->6-->7-->8-->9-->-999-->-99
Process returned 0 (0x0)   execution time : 8.994 s
Press any key to continue.
*/
