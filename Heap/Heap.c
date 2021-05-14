#include <stdio.h>

void Insert(int A[], int n)
{
    int i = n;
    int x = A[i];
    while (i > 1 && x > A[i / 2])
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = x;
}

int Delete(int A[], int n)
{
    int i,j,val,temp;
    temp = A[n];
    val = A[1];
    A[1] = A[n];
    A[n] = val;
    i =1;  
    j = 2 * i;

    while (j < n - 1)
    {
        /* code */
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
            j = 2 * j;
        }
        else
        {
            break;
        }
        return val;
    }
}

int main()
{
    int H[] = {0, 1, 2, 3, 4, 5, 6, 8};
    //  Insert(H,2);

    for (int i = 2; i <= 7; i++)
    {
        Insert(H, i);
    }

     for (int i = 7; i>1; i--)
    {
        Delete(H, i);
    }

    // int y = Delete(H,7);

    // printf("%d \n", y);
    
    for (int i = 0; i <= 7; i++)
    {
        printf("%d ", H[i]);
    }

    printf("\n");

    // for (int i = 7; i > 1; i--)
    // {
    //     Delete(H, i);
    // }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", H[i]);
    }
}