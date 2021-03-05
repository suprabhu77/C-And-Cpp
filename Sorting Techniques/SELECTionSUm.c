#include<stdio.h>
#include<stdlib.h>
void insertion(int A[],int N)
{
    for(int i=1;i<N;i++)
    {
        int j = i-1;
        int x = A[i];
        // for()
        while(j>0 && A[j]>x)
        {   
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
        
    }
}

void selectionsort(int A[],int n)
{    int j,k;
    for(int i=0;i<n;i++)
    {  
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}
void bubblesort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
}

int main()
{
    int A[] = {1,4,2,3,6,7};
    insertion(A,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",A[i]);
    }
    selectionsort(A,6);
    printf("\n");
     for(int i=0;i<6;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    bubblesort(A,6);
     for(int i=0;i<6;i++)
    {
        printf("%d ",A[i]);
    }
}