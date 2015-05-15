#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

void fill_array(int, int);
int array[ARRAY_SIZE];

int main(void) {
	printf("Program is running...\n");

	fill_array(4, 2);

	for (int i = 0; i < ARRAY_SIZE; i++) {
		if (i < ARRAY_SIZE - 1)
			printf("%i, ", array[i]);
		else
			printf("%i\n\n", array[i]);
	}

	system("PAUSE");
	return 0;
}

void fill_array(int start, int inc) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		array[i] = start + i * inc;
	}
}
