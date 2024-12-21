/*. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
Expected Output :
This is an isosceles triangle.*/
#include<stdio.h>
int main(){
int a,b,c;
printf("input the value of 3 sides of triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a+b>c && c+a>b && b+c>a){
    if(a==b && b==c && c==a){
         printf("the triangle is equilateral");
    }
    else if(a==b || b==c){
        printf("the triangle is isoscales");
    }
    else{
        printf("the triangle is scalene");
    }
}else{
    printf("thr triangle is not valid");
}
    return 0;
}