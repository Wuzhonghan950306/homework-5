#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main() {
    // Seed the random number generator
    srand(time(0));

    // Array to store frequencies of sums (2 to 12)
    int frequencies[13] = { 0 }; // We use 13 for convenience; indices 0 and 1 are unused.

    // Simulate rolling two dice
    for (int i = 0; i < ROLLS; i++) {
        int die1 = (rand() % 6) + 1; // Random number between 1 and 6
        int die2 = (rand() % 6) + 1; // Random number between 1 and 6
        int sum = die1 + die2;       // Calculate the sum of the dice
        frequencies[sum]++;          // Increment the frequency for this sum
    }

    // Print the results
    printf("Sum\tFrequency\tProbability\n");
    for (int sum = 2; sum <= 12; sum++) {
        double probability = (double)frequencies[sum] / ROLLS; // Calculate probability
        printf("%d\t%d\t\t%.2f%%\n", sum, frequencies[sum], probability * 100);
    }

    return 0;
}
