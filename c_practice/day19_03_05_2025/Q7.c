//find the value of npr using function
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("the value of n is:");
    scanf("%d",&n);
    printf("the value of r is:");
    scanf("%d",&r);
    int ncr=factorial(n)/factorial(n-r);
    printf("%d",ncr);
    return 0;
}