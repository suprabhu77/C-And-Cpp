#include<stdio.h>
int main()
{
    int a=1,*b =&a, **c= &b;
    a=4;
    **c = 5;
    printf("%d ",a);
}
