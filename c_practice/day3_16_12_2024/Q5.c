/*Write a program in C to make a pyramid pattern with numbers increased by 1.
    1
    0 1
    1 0 1
    0 1 0 1   */
    
#include<stdio.h>
int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0)printf("1");
        else printf("0");
    }
    printf("\n");
}

    return 0;
}