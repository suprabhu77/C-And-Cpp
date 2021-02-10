#include<stdio.h>
int main()
{
    char s[200];
    gets(s);
    char t;
    int count=0;
    int i,j;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    i=0;
    j=count-1;
    for(i=0;i<j;i++,j--)
    {   if(s[i]!=s[j])
        {  printf("Not palindrome");
            break;
        }
    }
    printf("%s is palindrome",s);
}