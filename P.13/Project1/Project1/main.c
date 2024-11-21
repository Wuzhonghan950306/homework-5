#include <stdio.h>
#include <stdlib.h>

// Function to cube a number using a pointer
void cubeByReference(int* nPtr) {
    *nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}

int main(void) {
    int number = 5;

    printf("The original value of number is %d\n", number);

    // Pass the address of the variable to the function
    cubeByReference(&number);

    printf("The new value of number is %d\n", number);

    system("pause");
    return 0;
}
