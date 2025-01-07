/*Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24*/
#include <stdio.h>
int main() {
    int x, y, i, total = 0; 
    printf("\nInput a pair of numbers (for example 10,2):");
    printf("\nInput first number of the pair: ");
    scanf("%d", &x); 
    printf("\nInput second number of the pair: ");
    scanf("%d", &y); 

    if (x < y) {
        return 0; 
    }

    printf("\nList of odd numbers: ");
    for (i = y; i <= x; i++) {        
        if ((i % 2) != 0) {
            printf("%d\n", i); 
            total += i; 
        }
    }
    
    printf("Sum=%d\n", total); 
    return 0;
}
