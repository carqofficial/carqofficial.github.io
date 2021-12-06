#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Represent a node of binary tree
struct node
{

    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;
struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct queue
{
    int front, rear, size;
    struct node **arr;
};

struct queue *createQueue()
{
    struct queue *newQueue = (struct queue *)malloc(sizeof(struct queue));
    newQueue->front = -1;
    newQueue->rear = 0;
    newQueue->size = 0;
    newQueue->arr = (struct node **)malloc(100 * sizeof(struct node *));
    return newQueue;
}

void enqueue(struct queue *queue, struct node *temp)
{
    queue->arr[queue->rear++] = temp;
    queue->size++;
}

struct node *dequeue(struct queue *queue)
{
    queue->size--;
    return queue->arr[++queue->front];
}

void insertNode(int data)
{
    // Create a new node
    struct node *newNode = createNode(data);
    // Check whether tree is empty
    if (root == NULL)
    {
        root = newNode;
        return;
    }

    else
    {
        // Queue will be used to keep track of nodes of tree level-wise
        struct queue *queue = createQueue();
        // Add root to the queue
        enqueue(queue, root);
        while (1)
        {
            struct node *node = dequeue(queue);
            // If node has both left and right child, add both the child to queue
            if (node->left != NULL && node->right != NULL)
            {
                enqueue(queue, node->left);
                enqueue(queue, node->right);
            }

            else
            {
                // If node has no left child, make newNode as left child
                if (node->left == NULL)
                {
                    node->left = newNode;
                    enqueue(queue, node->left);
                }
                // If node has left child but no right child, make newNode as right child
                else
                {
                    node->right = newNode;
                    enqueue(queue, node->right);
                }
                break;
            }
        }
    }
}

void inorderTraversal(struct node *node)
{
    if (root == NULL)
    {
        printf("Tree is empty\n");
        return;
    }

    else
    {
        if (node->left != NULL)
            inorderTraversal(node->left);
        printf("%d ", node->data);
        if (node->right != NULL)
            inorderTraversal(node->right);
    }
}
/*int count_new;
count_new = 0;
int countNode(int data)
{
    struct node *countNode1 = createNode(data);
    // base case
    if (root == NULL)
    {
        ;
    }
    // recursive call to left child and right child and
    //  add the result of these with 1 ( 1 for counting the root)
    else
    {
        struct queue *queue = createQueue();
        // Add root to the queue
        while (1)
        {
            struct node *node = dequeue(queue);
            // If node has both left and right child, add both the child to queue
            if (node->left != NULL && node->right != NULL)
            {
                count_new++;
            }
        }
    }
    return (count_new);
}*/
unsigned int getCount(struct node *node)
{
    int count_new;
    count_new = 0;
    if (node == NULL)
    {
        ;
    }
    // recursive call to left child and right child and
    //  add the result of these with 1 ( 1 for counting the root)

    else if (node->left != NULL && node->right != NULL)
    {
        count_new++;
    }

    return (count_new);
}
int main()
{
    /*system("cls");*/
    insertNode(1);
    printf("Binary tree after insertion: \n");
    inorderTraversal(root);
    insertNode(2);
    insertNode(3);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);
    insertNode(4);
    insertNode(5);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);
    insertNode(6);
    insertNode(7);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);
    insertNode(8);
    insertNode(9);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);
    printf("\n%d", getCount(root));
    getch();
    return 0;
}