//6. Write a program in C to display the multiplication table for a given integer.
//Test Data :
//Input the number (Table to be calculated) : 15
//Expected Output :
//15 X 1 = 15 Computer programming
//...
//...
//15 X 10 = 150
#include<stdio.h>
int main(){
int n;
printf("input the number:");
scanf("%d",&n);
for(int i=1;i<=10;i++){
    int j=n*i;
    printf("\n %d * %d =%d",n,i,j);
}
    return 0;
}
