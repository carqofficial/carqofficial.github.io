#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
void linked_creation(node *list)
{
    printf("Enter the data : ");
    printf("\nEnter -999 to stop linked list : ");
    scanf("%d", &list->data);
    if (list->data == -999)
    {
        list->next = NULL;
    }
    if (list->data != -999)
    {
        list->next = (node *)malloc(sizeof(node));
        linked_creation(list->next);
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
        }
        linked_print(list->next);
    }
}
node *linked_insert(node *list)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    printf("\nEnter the value to be inserted : ");
    scanf("%d", &ptr->data);
    ptr->next = list;
    list = ptr;
    return (list);
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    printf("\nEnter the linked list : \n");
    linked_creation(head);
    printf("\nPrinting the linked list : \n");
    linked_print(head);
    printf("\n");
    head = linked_insert(head);
    printf("\n");
    printf("\nPrinting the linked list : \n");
    linked_print(head);
    printf("\n\n");

    return 0;
}