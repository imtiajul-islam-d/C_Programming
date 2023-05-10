#include <stdio.h>
#include <string.h>
int is_palindrome(char *str)
{
    int length = strlen(str);
    int flag = 1;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[(length - i) - 1])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    char str[7] = "radfar";
    int check = is_palindrome(str);
    if (check)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}