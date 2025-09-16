#include <stdio.h>
#include "string_functions.h"

int main(void)
{
    printf("dog & cat: %i\n", string_equal("dog", "cat"));
    printf("dog & dogg: %i\n", string_equal("dog", "dogg"));
    printf("'' & '': %i\n", string_equal("", ""));
    printf("'' & ' ': %i\n", string_equal("", " "));
    printf("dog & dog: %i\n", string_equal("dog", "dog"));
    printf("dog in dogmam: %i\n", has_substring("dogmam", "dog"));
    printf("dog in dogman: %i\n", has_substring("dogman", "dog"));
}