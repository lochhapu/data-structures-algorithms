#include <stdio.h>
#include <stdbool.h>
#include "helpers.h"

#define LENGTH 5

void bubble_sort(int [], int);

// Sorts given array
void bubble_sort(int array[], int length) {
	return;
}

int main(void) {
	int numbers[LENGTH] = {22, 44, 66, 55, 11};

	printf("Before sort:\t");
	print_array(numbers, LENGTH);

	bubble_sort(numbers, LENGTH);

	printf("After sort:\t");
	print_array(numbers, LENGTH);
}
