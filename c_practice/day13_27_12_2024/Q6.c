/*Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00*/
#include <stdio.h>
int main() {
    float numbers[5], total=0, avg; 
    int j, x=0;
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
            x++; 
            total += numbers[j]; 
        }   
    }

    avg = total/x; 
   
    printf("\nNumber of positive numbers: %d", x);
    printf("\nAverage value of the said positive numbers: %.2f", avg);
    printf("\n");

    return 0;
}

