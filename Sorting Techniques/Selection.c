#include<stdio.h>
void bubblesort(int A[] ,int n );
int main()
{
int A[] = {1,2,9,4,5,6};
int n = 6;
bubblesort(A,n);
}
void bubblesort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        k=j=i;
        while(j<n)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
            j++;
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}