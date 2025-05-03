//swap 2 number
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("enter the value of a is %d\n",a);
    printf("enter the value of b is %d\n",b);
    return 0;
}