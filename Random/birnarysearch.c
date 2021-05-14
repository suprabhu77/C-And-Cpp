#include <stdio.h>
void selectionsor(int n, int A[])
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        j = k = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[k] > A[j])
            {
                k = j;
            }
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
}
int binarysearch(int A[], int key, int high, int low)
{
    int mid;
    // printf("hel");
    // printf("%d",high);
    if (low > high)
    {
        return -1;
        printf("%d ",mid);
    }
    mid = (high + low) / 2;
    if (A[mid] == key) 
    {
        return mid;
    }
    else if (A[mid] > key)
    {
        return binarysearch(A, key, (mid - 1), low);
    }
    else
    {
        if (A[mid] < key)
        {
            return binarysearch(A, key, high, (mid + 1));
        }
    }
}
int main()
{
    //lets sort the array
    int X;
    int A[] = {4, 3, 6, 1, 2, 5}, i = 0;
    selectionsor(6, A);
    int n = 6;
    while (i < n)
    {
        printf("%d ", A[i]);
        i++;
    }
    printf("\n");
    int high = 5;
    int low = 0;
    int key = 6;
    X = binarysearch(A, key, high, low);
    printf("%d ", X);
}