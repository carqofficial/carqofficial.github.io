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

    printf("Enter the integer : ");
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
        }
        linked_print(list->next);
    }
}
int linked_count(node *list)
{
    if (list != NULL)
    {
        return (1 + linked_count(list->next));
    }
    else if (list == NULL)
    {
        return 0;
    }
}
int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    printf("\nEnter the linked-list data : \n");
    linked_create(head);
    int count;
    count = linked_count(head);
    printf("\nTotal number of items in the linked-list : %d\n", count);
    printf("\nPrinting the linked-list : \n");
    linked_print(head);
    printf("\n\n");
    return 0;
}