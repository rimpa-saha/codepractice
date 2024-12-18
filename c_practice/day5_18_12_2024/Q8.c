/*8. Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three*/

#include<stdio.h>
int main(){
int x,y,z;
printf("enter the first number:");
scanf("%d",&x);
printf("enter the second number:");
scanf("%d",&y);
printf("enter the third number:");
scanf("%d",&z);
if(x>y && x>z)printf("first number is the greatest among three");
if(y>x && y>z)printf("second number is the greatest among three");
if(z>x && z>y)printf("third number is the greatest among three");

    return 0;
}