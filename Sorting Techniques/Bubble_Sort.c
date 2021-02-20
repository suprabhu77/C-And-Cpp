#include<stdio.h>
void Bubble_Sort(int A[],int n)
{   
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag = 0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                int t = A[j+1];
                A[j+1]=A[j];
                A[j] = t;
                flag = 1;
            }
        }
        if(flag==0){
            printf("The Sequence is already sorted \n");
            break;
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d ",A[i]);
    }

}
int main()
{
    int A[] = {7,6,5,4,3};
    Bubble_Sort(A,5);
}