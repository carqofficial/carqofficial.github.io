// C implementation to find leaf count of a given Binary tree
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* Function to get the count of leaf nodes in a binary tree*/
unsigned int getLeafCount(struct node *node)
{
    if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    else
        return getLeafCount(node->left) +
               getLeafCount(node->right);
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node *newNode(int data)
{
    struct node *node = (struct node *)
        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
struct node *root;
void inorderTraversal(struct node *node)
{
    if ((node == NULL) && (node->left == NULL) && (node->right == NULL))
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
/*Driver program to test above functions*/
int main()
{
    /*create a tree*/
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);

    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);

    root->right->left = newNode(6);
    root->right->right = newNode(7);
    printf("\nBinary tree after insertion: \n");
    inorderTraversal(root);

    /*get leaf count of the above created tree*/
    printf("\nLeaf count of the tree is %d", getLeafCount(root));

    getchar();
    return 0;
}
