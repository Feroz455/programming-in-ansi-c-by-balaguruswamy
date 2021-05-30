/**
page 436
program 13.4
Write a program to insert a given item before a specified node known
as key node.
*/

///program begin
#include<stdio.h>
#include<conio.h>

node *insert(node *head)
{
    node *find(node *p, int a);
    node *new;  /// Pointer to new node
    node *n1; /// pointer to node preceding key node
    int key;
    int x;
    printf("Value of new item\n");
    scanf("%d",&x);
    printf("Value of key item ? (type -999 if last)")
    scanf("%d",&key);

    if(head->number == key) ///New node is first
    {
        new = (node *)calloc(1, sizeof(node));
        new->number = x;
        new->next = head;
        head = new;
    }
    else /// find key node and insert new code
    {
        ///Before the key node
        n1 = find(head, key);///find key node

        if(n1 == NULL)
        {
            printf("Key is not found\n");

        }
        else /// insert new node
        {
            new = (node *)calloc(1, sizeof(node));
            new->number = x;
            new->next = n1->next;
            n1->next = new;
        }


    }
    return(head);

}


node *find(node *list, int key)
{
    if(list->next->number == key) ///key found
    {
        return(list);
    }
    else if(list->next->next == NULL)
        return(NULL);
    else
        find(list->next,key);
}
///program end

/**
output

*/
