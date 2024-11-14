#include <stdio.h>
#include <math.h>  // For sqrt() function

// Function to calculate and print the roots
void findRoots(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imagPart;

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Case 1: Real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real and Different Roots: %.2f and %.2f\n", root1, root2);
    }
    // Case 2: Real and same roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Real and Same Roots: %.2f and %.2f\n", root1, root2);
    }
    // Case 3: Complex roots
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Complex Roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}

int main() {
    double a, b, c;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Ensure it's a valid quadratic equation (a cannot be zero)
    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
    } else {
        // Call function to find roots
        findRoots(a, b, c);
    }

    return 0;
}
