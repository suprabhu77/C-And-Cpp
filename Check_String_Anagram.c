#include<stdio.h>
int main()
{   char s[100],p[100];
    // char s[9]="sumanth";
    // char p[9]="medical";
    gets(s);
    gets(p);
    
    int H[25]={0};
    int i=0;
    int j=0;
    while(s[i]!='\0')
    {
        H[s[i]-97]++;
        i++;
    }
    while(p[j]!='\0')
    {   
        H[p[j]-97]--;
        j++;
        if(H[j]<0)
        { 
            printf("Not Anagram");
            break;
        }
    }
    
}