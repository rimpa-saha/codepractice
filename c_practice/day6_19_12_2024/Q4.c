/* Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42
Expected Output :
Its very hot.*/
#include<stdio.h>
int main(){
int temp;
printf("input the days temp:");
scanf("%d",&temp);
if(temp<0) printf("freezing weather");
else if(temp<10) printf("very cold weather");
else if(temp<20) printf("cold weather");
else if(temp<30) printf(" normal weather");
else if(temp<40) printf("its hot");
else printf("its very hot");
    return 0;
}