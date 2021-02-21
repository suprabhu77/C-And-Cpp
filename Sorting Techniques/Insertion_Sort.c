#include<stdio.h>

void Insertion_sort(int A[],int N)
{
    for(int i=1;i<N;i++)
    {
        int j=i-1;
        int x=A[i];
        while(A[j] > x && j>-1)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
    for(int i=0;i<N;i++)
    {
    printf("%d ",A[i]);
    }
}
int main()
{
    int A[] = {1,2,4,5,3};
    Insertion_sort(A,5);
}