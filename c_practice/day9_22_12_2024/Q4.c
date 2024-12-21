/*Write a program in C which is a Menu-Driven Program to perform a simple calculation.
Test Data :
10
2
3
Expected Output :
The Multiplication of 10 and 2 is: 20*/
#include<stdio.h>
int main(){
    int num1,num2,choice;
    printf("input the two number:");
    scanf("%d %d",&num1,&num2);
    printf("input 1 for addition:\n ");
    printf("input 2 for substraction;\n");
    printf("input 3 for multiplication;\n");
    printf("input 4 for division;\n");
    printf("input choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("the addition of %d and %d is:%d",num1,num2,num1+num2);
        break;
        case 2:
        printf("the substraction of %d and %d is:%d",num1,num2,num1-num2);
        break;
        case 3:
        printf("the multiplication of %d and %d is:%d",num1,num2,num1*num2);
        break;
        case 4:
        printf("the division of %d and %d is:%d",num1,num2,num1/num2);
        break;
        default:
        printf(" input invalid");
        break;
    }
    return 0;
}