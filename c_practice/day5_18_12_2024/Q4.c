/*4. Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output :
2016 is a leap year.*/

#include<stdio.h>
int main(){
int m;
printf("enter a year:");
scanf("%d",&m);
if(m%4==0){
printf("%d is a leapyear",m);
}
else{
    printf("%d is not a leapyear",m);
}
    return 0;
}