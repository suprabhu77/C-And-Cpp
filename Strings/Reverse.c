#include<stdio.h>
int main()
{
    char s[200];
    printf("Enter the sentance to reverse")
    gets(s);
    char t;
    int count=0;
    int i,j;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    i=1;
    j=count-1;
    for(i=0;i<=j;i++,j--)
    {   t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    printf("%s",s);
}