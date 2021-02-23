#include <stdio.h>
void Angstromnumber(int N)
{
    int store = N;
    int temp = N;
    int count = 0;
    while (N != 0)
    {
        count++;
        N = N / 10;
    }
    int take = count;
    int Nm = count;
    int sum = 0;
    while (take > 0)
    {
        int k = temp % 10;
        // printf(" %d",k);
        int m = 1;
        while (count > 0)
        {
            m = m * k;
            count--;
        }
        count = Nm;
        // printf("%d ",m);
        sum = sum + m;
        temp = temp / 10;
        printf("%d ", sum);
        take--;
    }
}

int main()
{
    Angstromnumber(370);
}