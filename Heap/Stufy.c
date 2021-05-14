#include <stdio.h>
void Insertele(int A[], int N)
{
    int temp = A[N];
    int i = N;
    while (i > 1 & temp > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}
void Deleteelement(int A[], int N)
{
    int i = 1;
    int j = 2 * i;
    int x = A[1];
    A[1] = A[N];
    A[N] = x;
    while (j < N - 1)
    {
        if (A[j + 1] > A[j])
        {
            j = j + 1;
        }
        if (A[i] < A[j])
        {
            int te = A[j];
            A[j] = A[i];
            A[i] = te;
            i = j;
            j = 2 * i;
        }
        else
        {
            break;
        }
    }
    
}
int main()
{
    int A[] = {0, 2, 12, 13, 14, 15, 10, 16};
    int N = 7;
    // heapSort(A,N);
    for (int i = 2; i <= N; i++)
    {
        Insertele(A, i);
    }

    for (int i = 0; i <= N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (int i = 7; i>1; i--)
    {
        Deleteelement(A, i);
    }

    for (int i = 0; i <= N; i++)
    {
        printf("%d ", A[i]);
    }
}