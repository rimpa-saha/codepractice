/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)*/
#include<stdio.h>
int main(){
int days,year,month,day;
printf("input no of days:");
scanf("%d",&days);
year=days/365;
month=(days-(365*year))/30;
day=(days-(365*year))-(30*month);
printf("%d year(s)\n %d month(s)\n %d day(s)",year,month,day);

    return 0;
}