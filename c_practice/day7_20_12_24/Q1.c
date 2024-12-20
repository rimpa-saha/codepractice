/*1. Write a program that converts Centigrade to Fahrenheit. Computer programs
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.*/

#include<stdio.h>
int main(){
    float temp_c,temp_f;
printf("input a temerature in centigrate:");
scanf("%f",&temp_c);
temp_f=((9.0 / 5.0) * temp_c) + 32.0; // [C/5=(F-32)/9]
printf("%f degree fahrenheit",temp_f);
return 0;
}