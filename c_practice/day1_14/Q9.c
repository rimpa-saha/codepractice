//8. Write a C program to display the n terms of odd natural numbers and their sum.
//Test Data
//Input number of terms : 10
//Expected Output :
//The odd numbers are :1 3 5 7 9 11 13 15 17 19
//The Sum of odd Natural Number upto 10 terms : 100
#include<stdio.h>
int main(){
int n,sum=0;
printf("input the number of terms:");
scanf("%d",&n);

printf("the odd numbers are :\n");
for (int i=1;i<=n;i++){
    int odd=2*i-1;
    printf("%d ",odd);
    sum=sum+odd;
}
printf("\nthe sum of odd natural number upto %d termms:%d",n,sum);
    return 0;
}