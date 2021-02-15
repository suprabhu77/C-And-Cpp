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
int Sum(struct Node*p)
{
    int sum = 0;
    while(p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

void duplicate(struct Node *p)
{ 
struct Node *q = p->next;
while(q!=NULL)
{
    if(p->data!=q->data)
    {
        p=q;
        q=q->next;
    }
    else
    {
        p->next = q->next;
        free(q);
        q = p->next;
    }
}
}

// void RemoveDuplicate(struct Node *p)
// {
//  struct Node *q=p->next;
 
//  while(q!=NULL)
//  {
//  if(p->data!=q->data)
//  {
//  p=q;
//  q=q->next;
//  }
//  else
//  {
//  p->next=q->next;
//  free(q);
//  q=p->next;
//  }
//  }

// }

    int main()
    {
    int count1;
    int sum;
    int A[]={1 ,2,2};
    Create(A,3);
    display(first);
    printf("\n");
    duplicate(first);
    display(first);
    printf("\n");
    count1 = count(first);
    printf("%d \n",count1);
    sum = Sum(first);
    printf("The sum is %d ",sum);
    }