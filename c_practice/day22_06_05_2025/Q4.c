//write a function to convert celsius to fahrenheit
 #include<stdio.h>
 float converttemp(float celcius);
 int main(){
float far=converttemp(5);
printf("far:%f",far);
  return 0;
 }
 float converttemp(float celcius){
    float far=celcius*(9/5)+32;
    return far;
 }