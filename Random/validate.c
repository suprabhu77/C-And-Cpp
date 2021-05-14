#include <stdio.h>
int main()
{
    char s[20] = "{{[}}";
    int left = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == '(')
        {
            left = left + 1;
        }
        else if (s[i] == '{')
        {
            left = left + 1;
        }
        else if (s[i] == '[')
        {
            left = left + 1;
        }
        else if (s[i] == ')')
        {
            left = left - 1;
        }
        else if (s[i] == '}')
        {
            left = left - 1;
        }
        else if (s[i] == ']')
        {
            left = left - 1;
        }
    }
    if (left == 0)
    {
        printf("Valid STRING");
    }
    else
    {
        printf("Not Valid");
    }
}