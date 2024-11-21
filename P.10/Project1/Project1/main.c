#include <stdio.h>
#include <stdlib.h>

// Function to calculate the cube of a number using a pointer
void CubeByReference(int* nPtr);

int main(void)
{
    int number = 5;  // Initialize the number

    // Print the original value of the number
    printf("The original value of number is %d.\n", number);

    // Pass the address of number to CubeByReference function
    CubeByReference(&number);

    // Print the new value of the number after cubing
    printf("\nThe new value of number is %d.\n", number);

    system("pause"); // Pause the program (Windows-specific)
    return 0;
}

// Function definition
void CubeByReference(int* nPtr)
{
    // Cube the value pointed to by nPtr and store the result back at the address
    *nPtr = *nPtr * *nPtr * *nPtr;
}
