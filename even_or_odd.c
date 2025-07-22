// This program reads an integer from the user and determines if it's even or odd.

#include <stdio.h> // Required for input/output functions like printf and scanf

int main() {
    int number; // Declare an integer variable to store the user's input

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d",&number);
    // Read the integer input from the user
    // scanf returns the number of items successfully read.
    // We check if it's 1, meaning one integer was read.
    if (number==1){
        // Use the modulus operator (%) to check if the number is even or odd.
        // A number is even if it is perfectly divisible by 2 (remainder is 0).
        if (number % 2 == 0) {
            printf("The number %d is Even.\n", number);
        } else {
            // Otherwise, the number is odd.
            printf("The number %d is Odd.\n", number);
        }
    } else {
        // Handle cases where the user input is not a valid integer.
        // Clear the input buffer to prevent infinite loops if invalid input remains.
        while (getchar() != '\n');
        printf("Invalid input. Please enter a valid integer.\n");
    }

    return 0; // Indicate successful program execution
}


