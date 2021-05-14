#include <stdio.h>
//Bubble Sort
void bubblesort(int A[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }
}
///Insertion Sort
void insertionsort(int A[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int j = i - 1;
        int X = A[i];
        while (j > -1 && A[j] > X)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = X;
    }
}
//Selection sort
void SelectionSort(int A[], int N)
{
    int j, k;
    for (int i = 0; i < N - 1; i++)
    {
        k = i;
        for (j = i; j < N; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        int temp = A[k];
        A[k] = A[i];
        A[i] = temp;
    }
}
//Quick Sort
int partition(int A[], int low, int high)
{
    int i, j;
    i = low;
    j = high;
    int pivot = A[low];
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
        {
            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
    } while (i < j);
    int again = A[j];
    A[j] = A[low];
    A[low] = again;
    return j;
}
void QuickSort(int A[], int l, int h)
    {
        int j;

        if (l < h)
        {
            j = partition(A, l, h);
            QuickSort(A, l, j);
            QuickSort(A, j + 1, h);
        }
    }
//Mergesort
int main()
{
    int A[] = {1, 4, 2, 9, 8, 3, 2, 4, 7};
    int N = 9;
    // QuickSort(A,0,9);
    // bubblesort(A,N);
    // insertionsort(A,N);
    // SelectionSort(A,N);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
}