/*Write a program in C to display a pattern like a right angle triangle using an asterisk.

Thepattern like :
  *
  *
*****
  *
  *  */


#include<stdio.h>
int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        int a=n/2+1;
        if(i==a || j==a)printf("*");
        else printf(" ");
    }
    printf("\n");
}
    return 0;
}