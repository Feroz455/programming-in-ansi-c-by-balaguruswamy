/**
page 439
program 13.5
Write a function to delete a specified node

*/

///program begin
#include<stdio.h>
#include<conio.h>

node *delete(node *head)
{

    int key; /// Item to be deleted
    node *n; ///Pointer to node preceding key node;
    node *p; /// Temporary pointer
    printf("\nWhat is the item (NUMBER) to be deleted? \n");
    scanf("%d",&key);

    if(head->number== key) ///First node to be deleted
    {
        p = head->next; /// pointer to 2nd node in list
        free(head);
        head = p;
    }
    else
    {
        n  = find(head, key);
        if(n == NULL)
        {
            printf("\nKey not found\n");
        }
        else ///delete to the node
        {
            p = n->next->next;/// pointer to the node following the key node
            free(n->next);    ///free key node
            n->next = p;      ///establish link
        }
    }
    return(head);
}

///program end

/**
output

*/
