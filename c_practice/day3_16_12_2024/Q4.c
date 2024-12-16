/*Write a program in C to make a pyramid pattern with numbers increased by 1.
     *    
      **
       ***
        ****   */
    
#include<stdio.h>
int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n+i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
    printf("*");
    }
    printf("\n");
}

    return 0;
}