/*3. Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number*/

#include<stdio.h>
int main(){
int m;
printf("enter a integer:");
scanf("%d",&m);
if(m>0){
printf("%d is a positive number",m);
}
else{
    printf("%d is not a positive number",m);
}
    return 0;
}