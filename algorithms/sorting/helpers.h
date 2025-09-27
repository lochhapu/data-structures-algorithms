#pragma once

#include <stdio.h>

void print_array(int [], int);
void swap(int *, int *);

// Prints given array
void print_array(int array[], int length) {
    if (length <= 0) {
        printf("\n");
        return;
    }

    for (int i = 0; i < length - 1; i++) {
        printf("%i, ", array[i]);
    }

    printf("%i\n", array[length - 1]);
}

// Swaps given elements
void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}