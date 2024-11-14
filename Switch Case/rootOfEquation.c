#include <stdio.h>
#include <math.h>  // For sqrt() function

// Function to find the roots based on the discriminant value
void findRoots(double a, double b, double c) {
    double discriminant, root1, root2, realPart, imagPart;

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Determine the type of roots based on the discriminant
    switch (discriminant > 0) {
        case 1:  // Case 1: Real and different roots (discriminant > 0)
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Real and Different Roots: %.2f and %.2f\n", root1, root2);
            break;
        case 0:  // Case 2: Real and same roots (discriminant == 0)
            if (discriminant == 0) {
                root1 = root2 = -b / (2 * a);
                printf("Real and Same Roots: %.2f and %.2f\n", root1, root2);
            } else { // Case 3: Complex roots (discriminant < 0)
                realPart = -b / (2 * a);
                imagPart = sqrt(-discriminant) / (2 * a);
                printf("Complex Roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
            }
            break;
    }
}

int main() {
    double a, b, c;

    // Input coefficients
    printf("Enter coefficients a, b, and c (for equation ax^2 + bx + c = 0): ");
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
