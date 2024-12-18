/*1. Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal*/
#include<stdio.h>
int main(){
int m,n;
printf("enter the number1:");
scanf("%d",&m);
printf("enter the number2:");
scanf("%d",&n);
if(m==n)printf("number1 and number2 are equal");
else printf("number1 and number2 are not equal");
    return 0;
}