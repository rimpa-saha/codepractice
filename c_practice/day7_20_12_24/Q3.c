/*3. Write a C program that prints the perimeter of a rectangle using its height and width as inputs.
Expected Output :
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000*/
#include<stdio.h>
int main(){
    float height,width,perimeter;
printf("input the height of rectangle:");
scanf("%f",&height);
printf("input the width of rectangle:");
scanf("%f",&width);
perimeter=2*(height+width);
printf("perimeter of the rectangle is %f",perimeter);
return 0;
}