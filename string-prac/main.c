#include <stdio.h>
#include "string_functions.h"

int main(void)
{
    char *s1 = "Iam";
    char *s2 = "I am legend";
    char *s3 = "Iamlegend";
    char s4[] = "What the hell!";

    printf("%i\n", string_length(s1)); // 3
    printf("%i\n", string_length(s2)); // 11
    printf("%i\n", string_compare(s1, s2)); // 0
    printf("%i\n", string_compare(s1, s3)); // 1
    printf("%s\n", reverse_string(s4)); // 1
    printf("NURSES %i\n", check_palindrome("nurses"));
    printf("EVE %i\n", check_palindrome("eve"));
    printf("RADAR %i\n", check_palindrome("RADAR"));
}