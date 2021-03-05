#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);
        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
            swap(&A[i], &A[j]);
    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

void QuickSort(int A[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(A, low, high);
        QuickSort(A, low, j);
        QuickSort(A, j + 1, high);
    }
}

int main()
{
    int A[] = {1, 2, 4, 5, 72, 5, 9,65535};
    int high = 8;
    int low = 0;
    QuickSort(A, low, high);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", A[i]);
    }
}