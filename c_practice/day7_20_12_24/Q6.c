/*6. Write a program in C that takes minutes as input, and display the total number of hours and minutes.
Expected Output :
Input minutes: 546
9 Hours, 6 Minutes*/
#include<stdio.h>
int main(){
    int tot_min;
int hrs;      
int mins;  
printf("input minitues:");
scanf("%d",tot_min);
hrs = (tot_min / 60);   
mins = (tot_min % 60);   
printf("%d Hours, %d Minutes.\n", hrs, mins);  
return 0;
}