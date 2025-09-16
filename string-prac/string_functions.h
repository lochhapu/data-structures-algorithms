#ifndef STRING_FUNCTIONS_H
#define STRING_FUNCTIONS_H

#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

int string_length(const char *s);
bool string_equal(char *s1, char *s2);
char *reverse_string(char *s); // TODO FIX
bool check_palindrome(char *s1); // TODO FIX
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

// This function compares two strings for equality
bool string_equal(char *s1, char *s2)
{
    int i = 0;
    while (!(s1[i] == '\0' && s2[i] == '\0'))
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
        i++;
    }
    return true;
}

// This function will reverse the string
// Note: have to try this without allocating heap memory
char *reverse_string(char *s)
{
    int length = string_length(s);
    char *return_str = malloc(length + 1);
    if (return_str == NULL) return NULL;
    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        return_str[i] = s[j];
    }
    return_str[length] = '\0';
    return return_str;
}

// This function checks for palindrome
// Note: have to edit reverse_string and return to this, there is a memory leak!
bool check_palindrome(char *s1)
{
    if (string_equal(s1, reverse_string(s1)))
    {
        return true;
    }
    return false;
}

#endif // STRING_FUNCTIONS_H