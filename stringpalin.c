// palindroam means reveresed string == same string

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int length = strlen(str);
    int start, end = length - 1; // as the indecies start from 0 and in string the last index is occupied by null character

    while (start < end) // start index is less than the end index
    {

        if (str[start] != str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{

    char str[100];

    printf("Enter a string: ");
    gets(str);

    if (isPalindrome(str))
    {
        printf("String \"%s\" is palindrome", str);
    }

    else
    {
        printf("String \"%s\" is not palindrome", str);
    }

    return 0;
}