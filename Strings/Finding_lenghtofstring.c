#include<stdio.h>
int main()
{
    // char s[10] = "Sumanth";
    printf("Enter the Name to find length");
    char s[50];
    gets(s);
    int count = 0;
    for(int i =0;s[i]!='\0';i++)
    {
     count++;
     printf("%c %d\n",s[i],count);   
    }
}