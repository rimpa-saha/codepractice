/*2. Write a C program that calculates the volume of a sphere.
Expected Output :
Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.*/

#include<stdio.h>
int main(){
    float r,vol;
    float pi=3.14;
printf("input the radius of the sphere:");
scanf("%f",&r);
vol=(4*pi*r*r*r)/3;
printf("the volume of sphere is %f",vol);
return 0;
}