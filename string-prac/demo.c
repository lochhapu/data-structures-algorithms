#include <stdio.h>
#include "string-functions.h"

int main(void)
{
    // String equality
    printf("--- String Equality ---\n");
    printf("dog & cat: %i\n", string_equal("dog", "cat"));
    printf("dog & dogg: %i\n", string_equal("dog", "dogg"));
    printf("'' & '': %i\n", string_equal("", ""));
    printf("'' & ' ': %i\n", string_equal("", " "));
    printf("dog & dog: %i\n", string_equal("dog", "dog"));
    printf("NULL & NULL: %i\n", string_equal(NULL, NULL));

    // Reverse string
    printf("\n--- String Reversal ---\n");
    printf("Cat: %s\n", reverse_string("Cat"));
    printf("smiles: %s\n", reverse_string("smiles"));
    printf("pintac: %s\n", reverse_string("pintac"));
}