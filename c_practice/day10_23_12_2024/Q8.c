/*Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63*/
#include <stdio.h>
int main() 
{
    int x, y, sum; 
     printf("\nInput the first integer: "); 
    scanf("%d", &x);
     printf("\nInput the second integer: ");
    scanf("%d", &y);
      sum = x + y;
     printf("\nSum of the above two integers = %d\n", sum);
    
    return 0; 
}

