#include <stdio.h>

// Recursive binary search function
int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // Key not found
    }

    int mid = start + (end - start) / 2; // Calculate the middle index

    if (array[mid] == key) {
        return mid; // Key found
    }
    else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key); // Search in the left half
    }
    else {
        return binarySearch(array, mid + 1, end, key); // Search in the right half
    }
}

int main() {
    // Example sorted array
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    // Get the key to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(array, 0, size - 1, key);

    // Output the result
    if (result != -1) {
        printf("Element found at index %d.\n", result);
    }
    else {
        printf("Element not found.\n");
    }

    return 0;
}
