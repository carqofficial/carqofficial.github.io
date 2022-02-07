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
node *linked_create(node *list)
{
    int num;
    node *ptr, *new_node;
    printf("Enter the data : ");
    printf("\nEnter -999 to stop the linked list : ");
    scanf("%d", &num);
    while (num != -999)
    {
        new_node = (node *)malloc(sizeof(node));
        new_node->data = num;
        if (list == NULL)
        {
            new_node->next = new_node;
            list = new_node;
        }
        else
        {
            ptr = (node *)malloc(sizeof(node));
            ptr = list;
            while (ptr->next != list)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = list;
        }
        printf("Enter the data : ");
        printf("\nEnter -999 to stop the linked list : ");
        scanf("%d", &num);
    }
    return (list);
}
node *linked_print(node *list)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr = list;
    if (list == NULL)
    {
        printf("\nThe linked list is empty.\n\n");
    }
    while (ptr->next != list)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    return (list);
}
node *delete_end(node *list)
{
    node *ptr, *pre_ptr;
    ptr = (node *)malloc(sizeof(node));
    pre_ptr = (node *)malloc(sizeof(node));
    ptr = list;
    while (ptr->next != list)
    {
        pre_ptr = ptr;
        ptr = ptr->next;
    }
    pre_ptr->next = ptr->next;
    free(ptr);
    return (list);
}
node *delete_list(node *list)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr = list;
    while (ptr->next != list)
    {
        list = delete_end(list);
    }
    free(list);
    return (list);
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    head = NULL;
    printf("\nENter the linked list : \n");
    head = linked_create(head);
    printf("\nPrinting the linked lsit : \n");
    head = linked_print(head);
    printf("\n\nDeleting linked list : ");
    printf("\n\nCircular linked list has been deleted.\n\n");

    return 0;
}