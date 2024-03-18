#include <stdio.h>

// Function prototype
long long calculateFactorial(int n);

int main() {

    int number;

    printf("Enter a number: ");

    scanf("%d", &number);


    // Calculate and display factorial

    long long result = calculateFactorial(number);

    printf("Factorial of %d = %lld\n", number, result);

    return 0;
}

// Function to calculate factorial

long long calculateFactorial(int n) { 

    if (n == 0 || n == 1) {

        return 1;

    } else {

        long long result = 1;

        for (int i = 2; i <= n; ++i) {

            result *= i;
        }
        
        return result;
    }
}
