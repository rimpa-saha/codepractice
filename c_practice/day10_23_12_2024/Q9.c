/*Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375*/
#include <stdio.h>

int main() 
{
    int x, y, product;
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
     product = x * y; 
    printf("Product of the above two integers = %d\n", product);
}
