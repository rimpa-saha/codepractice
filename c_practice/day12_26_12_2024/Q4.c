/*Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.

Display a message if it is not possible to find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000 */
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c; 
    float discriminant, root1, root2;

    printf("Input the first number (a): ");
    scanf("%f", &a);
    printf("Input the second number (b): ");
    scanf("%f", &b);
    printf("Input the third number (c): ");
    scanf("%f", &c);

    if (a == 0) {
        printf("\nImpossible to find the roots as 'a' should not be zero.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root1 = %.5f\n", root1);
        printf("Root2 = %.5f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Root1 = Root2 = %.5f\n", root1);
    } else {
        printf("\nImpossible to find the roots as the discriminant is negative.\n");
    }

    return 0;
}
