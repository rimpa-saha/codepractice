/*Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
Test Data :
Input an integer: 15
Expected Output:
Range [0, 20]*/
#include <stdio.h>
int main() {
    int x;
    printf("\nInput an integer: "); 
    scanf("%d", &x);
    if(x >=0 && x <= 20) 
    {
        printf("Range [0, 20]\n"); 
    } 
    else if(x >=21 && x <= 40) 
    {
        printf("Range (21,40]\n"); 
    } 
    else if(x >=41 && x <= 60) 
    {
        printf("Range (41,60]\n"); 
    } 
    else if(x >61 && x <= 80) 
    {
        printf("Range (61,80]\n");
    } 
    else 
    {
        printf("Outside the range\n"); 
    }   

    return 0;
}

