#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]);

int main(void) {
    // Define face values and suits
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
    const char* face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                             "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // Initialize the deck to 0
    int deck[4][13] = { 0 };

    // Seed random number generator
    srand((unsigned int)time(0));

    // Shuffle and deal the deck
    shuffle(deck);
    deal(deck, face, suit);

    system("pause");
    return 0;
}

// Shuffle function
void shuffle(int wDeck[][13]) {
    int row, column, card;

    // Assign numbers 1-52 randomly to positions in the deck
    for (card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;      // Random suit (row)
            column = rand() % 13; // Random face value (column)
        } while (wDeck[row][column] != 0); // Find an empty spot
        wDeck[row][column] = card;        // Assign the card
    }
}

// Deal function
void deal(const int wDeck[][13], const char* wFace[], const char* wSuit[]) {
    int card, row, column;

    // Loop through all 52 cards
    for (card = 1; card <= 52; card++) {
        // Find the matching card in the deck
        for (row = 0; row < 4; row++) { // Loop over suits (rows)
            for (column = 0; column < 13; column++) { // Loop over face values (columns)
                if (wDeck[row][column] == card) { // Check if current card matches
                    // Print the card in "Face of Suit" format
                    printf("%5s of %-8s%c",
                        wFace[column],       // Face value (e.g., "Ace", "2", ...)
                        wSuit[row],          // Suit (e.g., "Hearts", "Diamonds", ...)
                        card % 2 == 0 ? '\n' : '\t'); // Alternate between tab and newline
                    break; // Exit the inner loop after finding the card
                }
            }
        }
    }
}
