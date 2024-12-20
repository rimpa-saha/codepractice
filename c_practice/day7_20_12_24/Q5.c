/*5. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes.*/
#include<stdio.h>
int main(){
    int hr,min,tot_min;
    printf("inpur hour:");
    scanf("%d",hr);
    printf("input minitues:");
    scanf("%d",min);
tot_min=(60*hr)+min;
printf("total:%d minitues",tot_min);

return 0;
}