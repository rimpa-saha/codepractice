/*Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2*/
#include <stdio.h>
int main() {
    float numbers[5]; 
    int j, pc=0, nc=0; 
    printf("\nInput the first number: "); 
    scanf("%f", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%f", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%f", &numbers[2]);
    printf("\nInput the fourth number: "); 
    scanf("%f", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%f", &numbers[4]);

    for(j = 0; j < 5; j++) {
        if(numbers[j] > 0) 
        {
            pc++; 
        }
        else if(numbers[j] < 0) 
        {
            nc++;
        }
    }
    printf("\nNumber of positive numbers: %d", pc);
    printf("\nNumber of negative numbers: %d", nc);
    printf("\n");

    return 0;
}

