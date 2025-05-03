/*Write a C program to determine whether a given number is prime or not.
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number.*/

#include<stdio.h>
int main(){
    int n;
printf("enter a number:");
scanf("%d",&n);
if(n%2==0){
    printf("%d is a prime number",n);
} else {
    printf("%d is not a prime number",n);
}
    return 0;
}