
// Question: Check whether a string is a palindrome while ignoring spaces and differences between uppercase and lowercase.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    j = strlen(str) - 1;

    while(i < j)
    {
        if(str[i] == ' ')
        {
            i++;
            continue;
        }

        if(str[j] == ' ' || str[j] == '\n')
        {
            j--;
            continue;
        }

        if(tolower(str[i]) != tolower(str[j]))
        {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if(palindrome == 1)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}