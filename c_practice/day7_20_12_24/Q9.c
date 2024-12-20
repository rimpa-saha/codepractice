/*9. Write a C program to perform addition, subtraction, multiplication and division of two numbers.
Expected Output :
Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000*/
#include<stdio.h>
int main(){
int x,y;
printf("input tow number seperated by comma:");
scanf("%d, %d ",&x,&y);
printf("the sum of the numbers:%d\n",x+y);
printf("the diffrence of the numbers:%d\n",x-y);
printf("the product of the numbers:%d\n",x*y);
printf("the quotient of the numbers:%d\n",x/y);
    return 0;
}