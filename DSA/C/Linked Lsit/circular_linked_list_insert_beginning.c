#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
node *linked_create(node *list)
{
    int num;
    node *ptr, *ptr_head, *new_node;
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
    while (ptr->next != list)
    {
        printf("%d-->", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    return (list);
}
node *insert_beg(node *list)
{
    int num;
    printf("\nEnter the number to be inserted : ");
    scanf("%d", &num);
    node *ptr, *new_node;
    ptr = (node *)malloc(sizeof(node));
    ptr = list;
    while (ptr->next != list)
    {
        ptr = ptr->next;
    }
    new_node = (node *)malloc(sizeof(node));
    new_node->data = num;
    ptr->next = new_node;
    new_node->next = list;
    list = new_node;
    return (list);
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    head = NULL;
    printf("\nEnter the linked list : \n");
    head = linked_create(head);
    printf("\n\nPrinting the linked list : \n");
    head = linked_print(head);
    printf("\n");
    head = insert_beg(head);
    printf("\nPrinting the linked list after insertation : \n");
    head = linked_print(head);
    printf("\n\n");

    return 0;
}