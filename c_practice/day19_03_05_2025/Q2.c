//swap two numbers without using third variable
#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return ;
}
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    swap(a,b);
printf("the value of a is %d \n the value of b is %d\n",b,a);

    return 0;
}