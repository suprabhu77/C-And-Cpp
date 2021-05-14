#include <stdio.h>
void merge(int A[], int low, int high, int mid)
{
    int i, j, k;
    int b[100];
    i = low;
    j = mid+1;
    k= low;
    while (i <= mid  && j <= high)
    {
        if (A[i] < A[j])
        {
            b[k++] = A[i++];
        }
        else
        {
            b[k++] = A[j++];
        }
    }
    for (; i <= mid; i++)
    {
        b[k++] = A[i];
    }
    for (; j <= high; j++)
    {
        b[k++] = A[j];
    }
    for (int l = low; l <= high; l++)
    {
        A[l] = b[l];
    }
}

void mergesort(int A[], int n)
{
    int i, p;
    for (p = 2; p <= n; p =p* 2)
    {
        for (i = 0; i + p - 1 <= n; i = i + p)
        {
            int low = i;
            int high = i + p - 1;
            int mid = (low + high) / 2;
            merge(A, low, high, mid);
        }
    }
    if (p / 2 < n)
    {
        merge(A,0,n,p/2-1);
    }
}

int main()
{
    int A[] = {1,65,90, 7, 2, 3, 4,76,96,8};
    int n = 8;
    mergesort(A, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    {
    }
}