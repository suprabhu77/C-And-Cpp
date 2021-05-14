#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *S;
};

void create(struct stack *st)
{
    printf("Enter the size of stack ");
    scanf("%d", &st->size);
    st->top = -1;
    st->S=(int *)malloc(st->size*sizeof(int));
}

void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack FULL ");
    }
    else

    {
        st->top++;
        // st->S[st->top] = x;
        st->S[st->top] = x;
        printf("%d ," ,x);
        // printf("%d ", st->S[st->top]);
    }
}
void Display(struct stack *st)
{
     for(int i=st->top;i>=0;i--)
       printf("%d ",st->S[i]);
}

int main()
{
    struct stack st;
    create(&st);
    push(&st, 10);
    // push(&st, 20);
    Display(&st);
}