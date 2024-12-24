/*Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803*/
#include <stdio.h>
#include <math.h>
int main() {
    float x1, y1, x2, y2, distance; 
    printf("Input the value of x1 and y1: ");
    scanf("%f %f", &x1,&y1);
    printf("Input the value of x2 and y2: ");
    scanf("%f %f", &x2,&y2);
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance between the said points: %f", sqrt(distance));
    printf("\n");
    
    return 0;
}
