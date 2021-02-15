#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
}*first=NULL;

void Create(int A[],int n)
{   int i = 0;
    struct Node* last;
    struct Node* t;
    first = (struct Node*)(malloc(sizeof(struct Node)));
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(i=1;i<n;i++)
    {
        t = (struct Node*)(malloc(sizeof(struct Node)));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

void display(struct Node* p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next ;
    }
}
int count(struct Node* p)
{
    int count =0;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    return count;
}

void ReverseList(struct Node *p)
{
    struct Node *q=p;
    int count1;
    printf("\n%d \n",count1);
    count1 = count(p);
    printf("%d \n",count1);
    int A[count1];
    A[count1] = 0;
    int i=0;
    while(p!=NULL)
    {
        A[i]=p->data;
        p=p->next;
        i++;
    }
    while(q!=NULL)
    {
        q->data = A[--i];
        q=q->next;
    }
}

void ReverseList2(struct Node *p)
{
    struct Node * q = NULL;
    struct Node *r = NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first = q;
}

int main()
{   int A[] = {1,2,3,4,5,6};
    Create(A,6);
    display(first);
    // ReverseList(first);
    // display(first);
    ReverseList2(first);
    display(first);
}
