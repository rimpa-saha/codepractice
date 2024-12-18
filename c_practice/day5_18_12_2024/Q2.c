/*2. Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output :
15 is an odd integer*/

#include<stdio.h>
int main(){
int m;
printf("enter a integer:");
scanf("%d",&m);
if(m%2!=0){
printf("%d is an odd integer",m);
}
else{
    printf("%d is not an odd integer",m);
}
    return 0;
}