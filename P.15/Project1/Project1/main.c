#include <stdio.h>

// Function to swap two elements
void swap(int* element1Ptr, int* element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

// Function to perform Bubble Sort
void bubbleSort(int* const array, const int size) {
    int pass, j;

    for (pass = 0; pass < size - 1; pass++) {
        for (j = 0; j < size - 1; j++) {
            // Swap if the current element is greater than the next
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main(void) {
    int array[] = { 2, 6, 4, 8, 10, 12, 89, 45, 37 };
    const int size = sizeof(array) / sizeof(array[0]);

    printf("Data items in original order\n");
    for (int i = 0; i < size; i++) {
        printf("%4d", array[i]);
    }

    bubbleSort(array, size); // Sort the array

    printf("\nData items in ascending order\n");
    for (int i = 0; i < size; i++) {
        printf("%4d", array[i]);
    }

    return 0;
}
