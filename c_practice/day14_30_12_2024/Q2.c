/*Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd*/
#include <stdio.h>
int main() {
    int x; 
    printf("Input an integer: ");
    scanf("%d", &x); 
    if(x == 0){
        printf("Positive\n");
    } 
    else if(x < 0 && (x%2) != 0) 
    {
        printf("Negative Odd\n");
    } 
    else if(x < 0 && (x%2) == 0) 
    {
        printf("Negative Even\n");
    } 
    else if(x > 0 && (x%2) != 0) 
    {
        printf("Positive Odd\n");
    } 
    else if(x > 0 && (x%2) == 0) 
    {
        printf("Positive Even\n");
    } 
    
    return 0;
}
