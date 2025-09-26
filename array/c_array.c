#include <stdlib.h>
#include <stdio.h>

int main(void) {
    /* Built in stack array */
    int built_in_array[5] = {11, 22, 33, 44, 55}; // create
    printf("Built in stack array:\n");
    for (int i = 0; i < 5; i++) { // traverse
        built_in_array[i] += 1; // access, update
        printf("%i\n", built_in_array[i]);
    }

    /* Heap allocated array */
    int *array_ptr = malloc(sizeof(int) * 5); // create
    if (array_ptr == NULL) {
        return EXIT_FAILURE;
    }

    printf("Heap allocated array:\n");
    for (int i = 0; i < 5; i++) {
        *(array_ptr + i) = i + 1; // can access using pointer arithmetic as well
        printf("%i\n", array_ptr[i]);
    }
    free(array_ptr);

    /* Dynamic array */
    int *dynamic_array = malloc(sizeof(int) * 5);
    if (dynamic_array == NULL) {
        return EXIT_FAILURE;
    }

    printf("Dynamic array with 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        dynamic_array[i] = i * 10;
        printf("%i\n", dynamic_array[i]);
    }

    // Resize with temporary pointer for safety
    int *temp = realloc(dynamic_array, sizeof(int) * 7);
    if (temp == NULL) {
        free(dynamic_array);
        return EXIT_FAILURE;
    }
    dynamic_array = temp;

    dynamic_array[5] = 50;
    dynamic_array[6] = 60;

    printf("Dynamic array with 7 elements:\n");
    for (int i = 0; i < 7; i++) {
        printf("%i\n", dynamic_array[i]);
    }
    free(dynamic_array);

    return EXIT_SUCCESS;
}