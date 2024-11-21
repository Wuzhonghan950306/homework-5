#include <stdio.h>

// Recursive function to find the maximum value in an array
int recursiveMaximum(int array[], int size) {
    if (size == 1) { // Base case: array has one element
        return array[0];
    }

    // Recursive call to find the maximum of the rest of the array
    int maxOfRest = recursiveMaximum(array, size - 1);

    // Compare the last element with the maximum of the rest
    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

int main() {
    int array[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int max = recursiveMaximum(array, size);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
