/*print thr given pattern
   1
  121
 12321
1234321*/ 
#include<stdio.h>
int main(){
int n;
printf("enter the no of rows:");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for (int p=1;p<=i;p++){
        printf("%d",p);
    }
    int a=i-1;
    for(int q=1;q<=i-1;q++){
        printf("%d",a);
        a--;
    }
    printf("\n");
}
}