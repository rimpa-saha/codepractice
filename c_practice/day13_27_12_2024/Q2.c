/*Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!*/
#include <stdio.h>
int main() {
    int  x, y;
   printf("\nInput the first number: "); 
    scanf("%d", &x);
     printf("\nInput the second number: ");
    scanf("%d", &y);
  if((y % x)== 0) 
    {
        printf("\nMultiplied!\n"); 
    } 
    else 
    {
        printf("\nNot Multiplied!\n");
    }
    
    return 0;
}
