#include <stdio.h>
int fun1(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        fun1(n-1);
    }
}
int main()
{  int x = 4;
    // printf("Enter the Number");
    // scanf("%d",&x);
    fun1(x);
}