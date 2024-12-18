/*7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Test Data : 135
Expected Output :
The person is Dwarf.*/

#include<stdio.h>
int main(){
int m;
printf("enter the height of a person:");
scanf("%d",&m);
if(m<150)printf("the person is draft\n");
else if((m>=150) && (m<170))printf("the person is avarage height\n");
else if((m>170) && (m<200))printf("the person is taller\n");
else printf("abnormal height\n");

    return 0;
}