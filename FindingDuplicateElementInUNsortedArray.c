#include<stdio.h>
int main()
{
    int A[10]={4,2,4,5,4,6,7,8,6,7};
    int n=10;
    for(int i=0;i<n-1;i++)
    {
        int count =1;
        if(A[i]!=-1)
       {
            for(int j=i+1;j<n;j++)
            { 
                if(A[i]==A[j])
                {
                    count++;
                    A[j]=-1;
                }
            }
            printf("%d %d\n",A[i],count);
        }
    }
}