#include<stdio.h>
void SelectionSort(int A[],int N)
{  int j,i,k;
    for( i=0;i<N-1;i++)
    {
        for( j=k=i;j<N;j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        int t;
        t=A[k];
        A[k] = A[i];
        A[i]=t;

    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
}


int main()
{ 
    int A[]={2,8,6,4,2};
    SelectionSort(A,5);
}