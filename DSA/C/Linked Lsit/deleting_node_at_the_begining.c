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
    printf("\nEnter -999 to end the linked list : ");
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
node *delete_before(node *list)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr = list;
    list = list->next;
    free(ptr);
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
    head = delete_before(head);
    printf("\nPrinting array after deleting the begining node : \n");
    linked_print(head);
    printf("\n\n");
    return 0;
}