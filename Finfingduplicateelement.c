// #include<stdio.h>
// int main()
// {
//     int A[11]={1,2,3,4,4,5,6,7,7,7,9};
//     int H[10]={0};//Hash table
//     for(int i=0;i<11;i++)
//     {   
//         H[A[i]]++;     
//     }
//      for(int i=0;i<9;i++)
//      {
//         if(H[i]>1){
//             printf("%d %d\n",i,H[i]);
//         }
//      }

// } 

//Another Method
#include<stdio.h>
int main()
{   int lastduplicate=0;
    int A[11]={1,2,3,4,4,5,6,7,7,7,9};
    int j;
    // for(int i=0;i<11;i++)
    // {
    //     if(A[i]==A[i+1] & A[i]!=lastduplicate){
    //         printf("%d\n",A[i]);
    //         lastduplicate=A[i];
    //     }
    // }
    for(int i=0;i<11;i++){
        if(A[i]==A[i+1]){
            j=i+1;
            while (A[i]==A[j])
            {
                j++;
            }
            printf("%d %d\n",A[i],j-i);
            i=j-1;
            
        }
    }
}