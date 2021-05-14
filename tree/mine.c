#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} *root = NULL;

void Insert(int key)
{
    struct Node *prev = NULL;
    struct Node *rt = root;
    struct Node *p;
    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->left = p->right = NULL;
        p->data = key;
        root = p;
        return;
    }
    while (rt != NULL)
    {
        prev = rt;
        if (key < rt->data)
        {
            rt = rt->left;
        }
        else if (key > rt->data)
        {
            rt = rt->right;
        }
        else
        {
            return;
        }
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->left = p->right = NULL;
    p->data = key;
    if (prev->data > key)
    {
        prev->left = p;
    }
    else
    {
        prev->right = p;
    }
}

void Inorder(struct Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Inorder(p->left);
        Inorder(p->right);
    }
}

struct Node * search(int key)
{
    struct Node *rt = root;
    while(rt!=NULL)
    {   if(rt->data ==key)
    {
        return rt;
    }
        else if (key < rt->data)
        {
            rt = rt->left;
        }
        else if (key > rt->data)
        {
            rt = rt->right;
        }
    }
}

int main()
{
    Insert(10);
    Insert(2);
    Insert(5);
    Insert(40);
    Inorder(root);
printf("\n");
    struct Node* temp = search(40);
    printf("Found %d ",temp->data);
    return 0;
}