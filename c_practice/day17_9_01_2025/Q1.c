/*print the given pattern
   A
  BCD
 EFGHI
JKLMNOP */
#include<stdio.h>
int main(){
int n;
char ch='A';
printf("enter the no of line:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for (int k=1;k<=2*i-1;k++){
    printf("%c",ch);
    ch++;
    }
    printf("\n");
}
    return 0;
}
