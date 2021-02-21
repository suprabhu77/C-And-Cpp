#include<stdio.h>
void Merge_sort(int A[],int B[],int M,int N)
{
    int i,j,k;
    i=j=k=0;
    int C[M+N];
    while(i<M && j<N)
    {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
            
        }
        else
        {
            C[k++]=B[j++];
            
        }
    }
    for(;i<M;i++)
    {
        C[k++]=A[i];
    }
    for(;j<N;j++)
    {
        C[k++]=B[j];
    }
    for(int i=0;i<9;i++)
    {
        printf("%d ",C[i]);
    }
}

int main()
{
    int A[] = {2,4,5,7};
    int B[] = {3,5,7,20,45};
    int C[20];
    Merge_sort(A,B,4,5);
}