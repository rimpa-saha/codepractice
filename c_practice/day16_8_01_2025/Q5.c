/*print the given pattern
    1
   123
  12345
 1234567 */
#include<stdio.h>
int main(){
int n;
printf("enter the number of line :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}