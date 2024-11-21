#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int b[] = { 10, 20, 30, 40 };  // Corrected the array initialization
    int* bPtr = b;                // Pointer to the array
    int i;
    int offset;

    printf("Array b printed with: \nArray subscript notation\n");
    for (i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);  // Using array subscript notation
    }

    printf("\nPointer/offset notation where\n"
        "the pointer is the array name\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(b+%d) = %d\n", offset, *(b + offset));  // Pointer with offset
    }

    printf("\nPointer subscript notation\n");
    for (i = 0; i < 4; i++) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);  // Pointer with subscript notation
    }

    printf("\nPointer/offset notation\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));  // Pointer with offset
    }

    system("pause");
    return 0;
}
