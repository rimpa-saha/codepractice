/* Write a program in C to read any Month Number in integer and display the number of days for this month.
Test Data :
7
Expected Output :
Month have 31 days*/
#include<stdio.h>
int main(){
int month;
printf("enter a month(1-12):");
scanf("%d",&month);
switch(month){
case 1: case 3: case 5: case 7:case 8:case 10:case 12:
printf("month have 31 days\n");
break;
case 4: case 6: case 9: case 11:
printf("month have 30 days\n");
break;
case 2: 
printf("month have 28 or 29 days\n");
break;
default:
printf("invalid month number");
}

    return 0;
}