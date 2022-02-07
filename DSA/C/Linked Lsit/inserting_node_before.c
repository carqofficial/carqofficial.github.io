#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
void linked_create(node *list)
{
    printf("Enter the data : ");
    printf("\nEnter -999 to stop the linked list : ");
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
    if (list->next != NULL)
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
}
node *insert_before(node *list)
{
    node *ptr, *new_node, *pre_ptr;
    ptr = (node *)malloc(sizeof(node));
    new_node = (node *)malloc(sizeof(node));
    pre_ptr = (node *)malloc(sizeof(node));
    int temp_insert, temp_find;
    printf("\nEnter the value to be inserted : ");
    scanf("%d", &temp_insert);
    printf("ENter the value before which the value to be inserted : ");
    scanf("%d", &temp_find);
    new_node->data = temp_insert;
    ptr = list;
    while (ptr->data != temp_find)
    {
        if (ptr->next == NULL)
        {
            printf("\nNo value of the linked list is matching with the entered value before which value to be inserted.");
            goto NEXT_STEP;
        }
        else if (ptr->next != NULL)
        {
            pre_ptr = ptr;
            ptr = ptr->next;
        }
    }
    pre_ptr->next = new_node;
    new_node->next = ptr;
    printf("\nPrintng the linked list after inserting new node : \n");
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
    head = insert_before(head);
    printf("\n\n");
    return 0;
}