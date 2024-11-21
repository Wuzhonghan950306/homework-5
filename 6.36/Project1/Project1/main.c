#include <stdio.h>

// Recursive function to print a string backward
void stringReverse(const char* str) {
    if (*str == '\0') { // Base case: null terminator
        return;
    }
    stringReverse(str + 1); // Recursive call with the next character
    putchar(*str);          // Print the current character after the recursive call
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string (including spaces)

    printf("Reversed string: ");
    stringReverse(str); // Call the recursive function
    printf("\n");

    return 0;
}
