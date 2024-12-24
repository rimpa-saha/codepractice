/*Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444*/
#include <stdio.h>

int main() 
{
    double wi1, ci1, wi2, ci2, result; 
    printf("Weight - Item1: ");
    scanf("%lf", &wi1);
    printf("No. of item1: ");
    scanf("%lf", &ci1);
    printf("Weight - Item2: ");
    scanf("%lf", &wi2);
    printf("No. of item2: ");
    scanf("%lf", &ci2);
    result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
       printf("Average Value = %f\n", result);
    
    return 0;
}

