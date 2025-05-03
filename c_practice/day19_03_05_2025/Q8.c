/*Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
Expected Output :
The sum of the series is : 34 */
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
int sum=0;
for(int i=1;i<=5;i++){
    sum+=factorial(i)/i;
}
printf("%d",sum);
    return 0;
}
