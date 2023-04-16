#include <stdio.h>
#include "factorial.h"

int main()
{
    int num;

    // Get user input for the number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Check if the input is a non-negative number
    if (num < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 1; // Exit with an error code
    }

    // Calculate factorial
    int result = calculateFactorial(num);

    // Print the result
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
