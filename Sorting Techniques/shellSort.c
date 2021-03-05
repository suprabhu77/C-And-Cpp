#include <stdio.h>
void Shellsort(int A[], int N)
{
    int gap, temp, j;
    for (gap = N / 2; gap >= 1; gap /= 2)
    {
        for (int i = gap; i < N; i++)
        {
            temp = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j = j - gap;
            }
            A[j+gap] = temp;
        }
    }
}

int main()
{
    int A[] = {1, 4, 3, 2, 5, 8, 6, 2};
    int N = 8;
    Shellsort(A, N);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", A[i]);
    }
}