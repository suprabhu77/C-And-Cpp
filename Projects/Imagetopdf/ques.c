#include <stdio.h>
#include <stdlib.h>
struct que
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct que *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enqque(struct que *q, int data)
{
    if (q->rear == q->size - 1)
    {
        printf("Queue Is full");
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = data;
    }
}

int Deque(struct que *q)
{
    int x = -1;
    if (q->rear == q->front)
    {
        printf("Queue is empty");
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void Display(struct que * q)
{
    int i;

    for (i = q->front + 1; i <= q->rear; i++)
        printf("%d ", q->Q[i]);
    printf("\n");
}

int main()
{
    struct que q;
    create(&q, 5);
    enqque(&q, 10);
    enqque(&q, 20);
    enqque(&q, 30);
    Display(&q);
    Deque(&q);
    Display(&q);
    Deque(&q);
    Display(&q);
    Deque(&q);
    Display(&q);
    Deque(&q);
    Display(&q);

}