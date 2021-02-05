#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r;
    struct rectangle *p;
    p = (struct rectangle*)malloc(sizeof(struct rectangle));
    p->breadth = 20;
    p->length = 10;
    // r.length = 10;
    // r.breadth = 20;
    printf("%d",p->length*p->breadth);
}