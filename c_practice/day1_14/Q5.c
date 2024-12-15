//4. Write a program in C to read 10 numbers from the keyboard and find their sum and average.
//Test Data :
//Input the 10 numbers :
//Number-1 :1 Computer programming
//...
//Number-10 :10
//Expected Output :
//The sum of 10 no is : 55
//The Average is : 5.500000
#include<stdio.h>
int main(){
int n,sum=0;
float avg;
printf("input the 10 numbers\n:");
for(int i=1;i<=10;i++){
    printf("number- %d :",i);
    scanf("%d",&i);
    sum=sum+i;
    avg=sum/10.0;
}
printf("\nthe sum of 10 no is:%d \n the average is :%f",sum,avg);

    return 0;
}