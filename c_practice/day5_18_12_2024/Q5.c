/*5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.*/

#include<stdio.h>
int main(){
int m;
printf("enter a age:");
scanf("%d",&m);
if(m>=18){
printf("Congratulation! You are eligible for casting your vote.");
}
else{
    printf(" You are not eligible for casting your vote.");
}
    return 0;
}