/*Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z, result, max;
    printf("\nInput the first integer: "); 
    scanf("%d", &x);
    printf("\nInput the second integer: ");
    scanf("%d", &y);
    printf("\nInput the third integer: ");
    scanf("%d", &z);
    result = (x + y + abs(x - y)) / 2;
    max = (result + z + abs(result - z)) / 2;
    printf("\nMaximum value of three integers: %d", max);
	printf("\n");
    
    return 0;
}

