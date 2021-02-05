#include<stdio.h>
//here static variable will be created in the code memory and also x has a single variable adress there only the value will be over writed
int fun(int n)
{
     static int x = 0;
    if(n>0)
    {   x++;
        return fun(n-1)+x;
    }
}
//Here in the fun1 function each time execution takes place n value changes.
int fun1(int n){
    if(n>0){
        return fun(n-1)+n;
    }
}
int main()
{
    int x = 5;
    printf("%d\n",fun(x));
    printf("%d",fun1(x));
}