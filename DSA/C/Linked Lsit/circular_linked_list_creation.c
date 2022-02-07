#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};
typedef struct linked_list node;
node *linked_create(node *list)
{
    node *new_node, *ptr, *ptr_head;
    ptr = (node *)malloc(sizeof(node));
    ptr_head = (node *)malloc(sizeof(node));
    int num;
    printf("Enter the data : ");
    printf("\nEnter -999 to stop linked list : ");
    scanf("%d", &num);
    while (num != -999)
    {
        new_node = (node *)malloc(sizeof(node));
        new_node->data = num;
        //printf("printed num : %d", new_node->data);
        if (list == NULL)
        {
            //printf("printed num : %d", new_node->data);
            new_node->next = new_node;
            list = new_node;
            //printf("%d-->", list->data);
        }
        else
        {
            ptr = list;
            ptr_head = list;
            //printf("%d", ptr->data);
            //printf("%d", ptr->next->data);
            while (ptr->next != list)
            {
                ptr = ptr->next;
                //printf("tic");
            }
            ptr->next = new_node;
            new_node->next = list;
            //printf("%d-->", list->data);
        }
        printf("Enter the data : ");
        printf("\nEnter -999 to stop linked list : ");
        scanf("%d", &num);
    }
    return (list);
}
node *linked_print(node *list)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p = list;
    //printf("\nTic");
    //printf("\nTic");
    while (p->next != list)
    {
        //printf("\nTic");
        printf("%d-->", p->data);
        p = p->next;
    }
    printf("%d", p->data);
    return (list);
}

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));
    head = NULL;
    /*
    node *first, *second, *third;
    first = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    
    head->data = 1;
    head->next = first;
    first->data = 2;
    first->next = second;
    second->data = 3;
    second->next = third;
    third->data = 4;
    third->next = head;
    */
    printf("\nEnter the linked list : \n");
    head = linked_create(head);
    printf("\n\nPrinting the linked list : \n");
    head = linked_print(head);
    printf("\n\n");
    return 0;
}