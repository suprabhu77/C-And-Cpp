#include<stdio.h>
//Sum of natural numbers
int sum(int n)
{
    if(n>0){
        return sum(n-1)+n;
    }
}
//factorial
int fact(int n)
{
    if(n==0){
        return 1;
    }
    else
    {
        return fact(n-1)*n;   
    }
}
//power of n,m
int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return power(m,n-1)*m;
    }

}

int main()
{
    int x = 5;
    printf("%d\n",sum(5));
    printf("%d\n",fact(5));
    printf("%d",power(2,5));
}