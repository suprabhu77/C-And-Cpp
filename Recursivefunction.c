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
double e(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
       return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int main()
{
    int x = 5;
    printf("%d\n",sum(5));
    printf("%d\n",fact(5));
    printf("%d",power(2,5));
    printf("%d",e(3,15));
}