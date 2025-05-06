#include<stdio.h>
void printtable(int n);
int main(){
     int n;
     printf("enter the number:");
     scanf("%d",&n);
    printtable( n);
     
}
void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}
