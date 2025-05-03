//sum of two numbers using function
#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}