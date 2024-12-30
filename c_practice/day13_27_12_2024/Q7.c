/*Write a C program that read 5 numbers and sum of all odd values between them.
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34*/
#include <stdio.h>
int main() {
    int numbers[5], total=0;
    printf("\nInput the first number: "); 
    scanf("%d", &numbers[0]);
    printf("\nInput the second number: "); 
    scanf("%d", &numbers[1]);
    printf("\nInput the third number: "); 
    scanf("%d", &numbers[2]);
    printf("\nInput the fourth number: "); 
    scanf("%d", &numbers[3]);
    printf("\nInput the fifth number: "); 
    scanf("%d", &numbers[4]);

    for(int j = 0; j < 5; j++) {
        if((numbers[j]%2) != 0) 
        {
            total=total+ numbers[j]; 
        }   
    }

    printf("\nSum of all odd values: %d", total);
    return 0;
}
