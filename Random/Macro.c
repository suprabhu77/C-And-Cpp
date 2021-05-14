#include <stdio.h>
#include <stdlib.h>
#define MALLAOC_int(p, n, type)            \
    p = (type *)malloc(n * sizeof(type));  \
    if (p == NULL)                         \
    {                                      \
        printf("memory is not allocated"); \
        exit(0);                           \
    }


int main()
{
    int *p1;
    MALLAOC_int(p1, 5, int);
    *p1 = 10;
    printf("%d %d ", p1, *p1);
    p1 = NULL; //dangling pointer
    printf("%d %d ",p1,*p1);
    *p1 = 10;
    printf("%d %d ",p1,*p1);

    if (1)
    {
        printf("\n Done");
    }
}
