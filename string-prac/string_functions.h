#ifndef STRING_FUNCTIONS_H
#define STRING_FUNCTIONS_H

#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

size_t string_length(const char *s);
bool string_equal(const char *s1, const char *s2);
void string_copy(const char *src, char *dest); // TODO - IMPLEMENT
void reverse_string(char *s); // TODO - IMPLEMENT
bool check_palindrome(char *s1); // TODO - TEST
bool has_substring(char *str, char *substr); // TODO - IMPLEMENT

// Gets the length of the string
size_t string_length(const char *s)
{
    if (s == NULL)
    {
        return 0;
    }

    size_t length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

// Copies source string to destination
void string_copy(const char *src, char *dest)
{
    for (int i = 0, n = string_length(src); i <= n; i++)
    {
        dest[i] = src[i];
    }
}

// This function compares two strings for equality
bool string_equal(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
    {
        if (s1 == NULL && s2 == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int i = 0;

    while (1)
    {
        if (s2[i] != s1[i])
        {
            return false;
        }
        else if (s1[i] == '\0')
        {
            return true;
        }
        else
        {
            i++;
        }
    }
}

void reverse_string(char str[])
{
    // ...
}

// This function checks for palindrome
// bool check_palindrome(char *s1)
// {
//     if (string_equal(s1, reverse_string(s1)))
//     {
//         return true;
//     }

//     return false;
// }

#endif // STRING_FUNCTIONS_H