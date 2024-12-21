/*Write a C program to check whether a triangle can be formed with the given values for the angles.
Test Data :
40 55 65
Expected Output :
The triangle is not valid.*/
#include<stdio.h>
int main(){
int a,b,c;
printf("input the value of 3 angle of triangle:");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180){
    printf("the triangle is valid");
}
else{
    printf("thr triangle is not valid");
}
    return 0;
}