#ifndef STRING_FUNCTIONS_H
#define STRING_FUNCTIONS_H

#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

char *dynamic_string(const char *);
size_t string_length(const char *);
bool string_equal(const char *, const char *);
void string_copy(const char *, char *); // TODO - check efficiency
void reverse_string(char *); // TODO - works but inefficient
bool check_palindrome(char *); // Depends on reverse_string()
bool has_substring(char *, char *); // TODO - IMPLEMENT

// Returns string created on heap
char *dynamic_string(const char *str)
{
    char *returnstr = malloc(string_length(str) + 1);
    string_copy(str, returnstr);
    return returnstr;
}

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

// Reverses given string
void reverse_string(char str[])
{
    int length = string_length(str);
    char *revstr = malloc(length + 1);

    for (int i = 0, j = length - 1; i < length; i++, j--)
    {
        revstr[i] = str[j];
    }

    revstr[length] = '\0';
    string_copy(revstr, str);
    free(revstr);
}

#endif // STRING_FUNCTIONS_H