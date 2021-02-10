#include<stdio.h>
int main()
{
    printf("Enter the Name to find vowels and consonats");
    char s[100];
    gets(s);
    int vowels=0,consonants=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowels++;
        }
        else if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        {
            consonants++;
        }
    }
    printf("%d %d",vowels,consonants);
}