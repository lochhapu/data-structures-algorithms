#include <stdio.h>
#include "string_functions.h"

/* Demo section available, uncomment and comment out to demo */
int main(void)
{
    // String equality
    // printf("--- String Equality ---\n");
    // printf("dog & cat: %i\n", string_equal("dog", "cat"));
    // printf("dog & dogg: %i\n", string_equal("dog", "dogg"));
    // printf("'' & '': %i\n", string_equal("", ""));
    // printf("'' & ' ': %i\n", string_equal("", " "));
    // printf("dog & dog: %i\n", string_equal("dog", "dog"));
    // printf("NULL & NULL: %i\n", string_equal(NULL, NULL));

    // Reverse string
    char cat[] = "cat";
    char *smiles = dynamic_string("Hi mom");
    char catnip[] = "pintac";
    reverse_string(cat);
    reverse_string(smiles);
    reverse_string(catnip);
    printf("\n--- String Reversal ---\n");
    printf("Cat -> %s\n", cat);
    printf("smiles -> %s\n", smiles);
    printf("pintac -> %s\n", catnip);
    free(smiles);

    // String copying
    // char *src = "Hi!";
    // char dest1[10];
    // string_copy(src, dest1);
    // printf("%s\n", dest1);
}