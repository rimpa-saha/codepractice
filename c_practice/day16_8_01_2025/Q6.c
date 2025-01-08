/*print the given pattern
   AB
  ABCD
 ABCDEF
ABCDEFGH */
#include<stdio.h>
int main(){
int n;
printf("enter the number of line :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        printf(" ");
    }
    for(int j=0;j<=2*i-1;j++){
        printf("%c", 'A' + j);
    }
    printf("\n");
}
return 0;
}