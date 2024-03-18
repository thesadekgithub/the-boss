#include <stdio.h>

// Function declaration
double calculateRectangleArea(double length, double width);

int main()
{
    // Variables to store user input
    double length, width;

    // Get user input for length
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    // Get user input for width
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate the area using the function
    double area = calculateRectangleArea(length, width);

    // Display the result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}

// Function definition
double calculateRectangleArea(double length, double width)
{
    return length * width;
}
