#include<stdio.h>
int main()
{
    // int A[11]= {0,1,2,3,4,5,6,7,8,9,10};
    // int K = 10;
    // int n=10;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<=n;j++)
    //     {
    //         if(A[i]+A[j]==K)
    //         {
    //             printf("%d %d, %d\n",A[i],A[j],K);
    //         }
    //     }
    // }

    //By Unsorted Array Findig Sum HASH TABLE

    // int A[] = {2,3,4,1,5,8,6,9};
    // int k=10;
    // int n=9;
    // int H[9] = {0};
    // for(int i=0;i<n;i++)
    // {
    // if(H[k-A[i]]!=0)
    // {
    //     printf("%d %d\n",A[i],k-A[i]);
    // }
    //     H[i]++;
    // }

    int A[] = {1,2,4,5,6,8,9};
    int k=10;
    int n=9;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(A[i]+A[j]==k){
            printf("%d %d\n",A[i],A[j]);
            i++;
            j--;
        }
        if(A[i]+A[j]<k){
            i++;
        }
        if(A[i]+A[j]>k){
            j--;
        }
        

    }

    
}