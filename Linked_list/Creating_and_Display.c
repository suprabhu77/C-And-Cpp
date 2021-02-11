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

// void RDisplay(struct Node *p)
// {
//  if(p!=NULL)
//  {
//  printf("%d ",p->data);
//  RDisplay(p->next);

//  }
// }
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

    int main()
    {
    int count1;
    int sum;
    int A[]={1,2,3,4,5,8};
    Create(A,6);
    display(first);
    // RDisplay(first);
    printf("\n");
    count1 = count(first);
    printf("%d \n",count1);
    sum = Sum(first);
    printf("The sum is %d ",sum);
    }