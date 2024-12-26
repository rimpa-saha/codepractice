/*Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40*/
#include<stdio.h>
int main(){
int hours,min,sec,s;
printf("input seconds:");
scanf("%d",&sec);
hours=sec/3600;
min=(sec-(3600*hours))/60;
s=(sec-(3600*hours))-(60*min);
printf("H:M:S -%d:%d:%d",hours,min,s);

    return 0;
}