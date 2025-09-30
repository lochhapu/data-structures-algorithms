#include <stdio.h>
#include <stdbool.h>

bool linear_search(int, int [], int);
bool binary_search(int, int [], int);

int main(void) {
	// ...
}

bool linear_search(int value, int array[], int length) {
	for (int i = 0; i < length; i++) {
		if (array[i] == value) {
			return true;
		}
	}
	return false;
}

bool binary_search(int value, int array[], int length) {
	return;
}
