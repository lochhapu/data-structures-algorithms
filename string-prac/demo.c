#include <stdio.h>
#include "string_functions.h"

int main(void)
{
    printf("dog & cat: %i\n", string_equal("dog", "cat"));
    printf("dog & dogg: %i\n", string_equal("dog", "dogg"));
    printf("'' & '': %i\n", string_equal("", ""));
    printf("'' & ' ': %i\n", string_equal("", " "));
    printf("dog & dog: %i\n", string_equal("dog", "dog"));
}