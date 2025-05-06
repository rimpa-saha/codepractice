//write functions to calculate area of square ,a circle& a rectangle.
#include<stdio.h>
#include<math.h>
 float squarearea(float side);
 float circlearea(float radius);
 float rectanglearea(int a,int b);
 int main(){
    int a=5.00,b=6.00;
    printf("the area is :%f",rectanglearea(a,b));
    return 0;
 }
 float squarearea(float side){
    return side*side;
 }
 float circlearea(float radius){
    return 3.14*radius*radius;
 }
 float rectanglearea(int a,int b){
    return a*b;
 }