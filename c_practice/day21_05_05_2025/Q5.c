#include<stdio.h>
void calculateprice(float value);
int main(){
    float value =100;
    calculateprice(value);
    printf("the value is :%f",value);
    return 0;
}
void calculateprice( float value){
    value=value+(0.25*value);
    printf("final price is :%f\n",value);
}