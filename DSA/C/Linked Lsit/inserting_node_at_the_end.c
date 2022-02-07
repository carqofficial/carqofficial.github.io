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
    printf("Enter the value : ");
    printf("\nEnter -999 to stop linked list : ");
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
node *insert_last(node *list)
{
    node *ptr, *new_node, *pre_ptr;
    ptr = (node *)malloc(sizeof(node));
    new_node = (node *)malloc(sizeof(node));
    pre_ptr = (node *)malloc(sizeof(node));
    int temp_insert;
    printf("\nENter the value to be inserted : ");
    scanf("%d", &temp_insert);
    new_node->data = temp_insert;
    ptr = list;
    while (ptr->next != NULL)
    {
        pre_ptr = ptr;
        ptr = ptr->next;
    }
    pre_ptr->next = new_node;
    new_node->next = ptr;
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
    head = insert_last(head);
    printf("\nPrinting the linked list after insetation : \n");
    linked_print(head);
    printf("\n\n");
    return 0;
}