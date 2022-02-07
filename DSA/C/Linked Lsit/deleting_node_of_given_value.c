#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
void linked_create(node *list)
{
    printf("Enter the data : ");
    printf("\nENter -999 to end the linked list : ");
    scanf("%d", &list->data);
    if (list->data == -999)
    {
        list->next = NULL;
    }
    else if (list->data != -999)
    {
        list->next = (node *)malloc(sizeof(node));
        linked_create(list->next);
    }
}
void linked_print(node *list)
{
    if (list->next->next == NULL)
    {
        printf("%d", list->data);
    }
    else
    {
        printf("%d-->", list->data);
        linked_print(list->next);
    }
}
node *delete_node(node *list)
{
    node *ptr, *pre_ptr;
    int delete_int;
    ptr = (node *)malloc(sizeof(node));
    pre_ptr = (node *)malloc(sizeof(node));
    printf("\nEnter the value to be deleted : ");
    scanf("%d", &delete_int);
    ptr = list;
    while (ptr->data != delete_int)
    {
        if (ptr->next != NULL)
        {
            pre_ptr = ptr;
            ptr = ptr->next;
        }
        else if (ptr->next == NULL)
        {
            printf("\nEnter value cannot be found in the linked list.");
            goto NEXT_STEP;
        }
    }
    pre_ptr->next = ptr->next;
    free(ptr);
    printf("\nPrinting the linked list after deletation : \n");
    linked_print(list);
NEXT_STEP:
    return (list);
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    printf("\nEnter the linked list : \n");
    linked_create(head);
    printf("\nPrinting the linked list : \n");
    linked_print(head);
    printf("\n");
    delete_node(head);
    printf("\n\n");
    return 0;
}