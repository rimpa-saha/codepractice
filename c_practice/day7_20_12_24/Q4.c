/*4. Write a C program that converts kilometers per hour to miles per hour.
Expected Output :
Input kilometers per hour: 15
9.320568 miles per hour*/
#include<stdio.h>
int main(){
    float kmph,mlph;
printf("input kilometer per hour:");
scanf("%f",&kmph);
mlph = (kmph * 0.6213712);
printf("%f miles per hour",mlph);
return 0;
}