#include<stdio.h>
int main()
{
    char s[50];
    gets(s);
    for(int i = 0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
        else if(s[i] >= 'a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
}