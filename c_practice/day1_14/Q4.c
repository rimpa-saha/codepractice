//3. Write a program in C to display n terms of natural numbers and their sum.
//Test Data : 7
//Expected Output :
//The first 7 natural number is :
//1 2 3 4 5 6 7
//The Sum of Natural Number upto 7 terms : 28
#include<stdio.h>
int main(){
int n;
printf("enter the number of natural number:");
scanf("%d",&n);
int sum =0;
printf("\nthe first %d natural number is:\n ",n);
for(int i=1;i<=n;i++){
 printf("%d ",i);
 sum=sum+i;   
}
printf("\nthe sum of natural number upto %d terms:%d",n,sum);
    return 0;
}