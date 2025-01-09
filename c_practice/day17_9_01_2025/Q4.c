/*print thr given pattern
   A
  ABA
 ABCBA
ABCDCBA*/ 
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
        char ch =(char) (p+64);
        printf("%c",ch);
    }
    int a=i-1;
    for(int q=1;q<=i-1;q++){
        char ch =(char) (a+64);
        printf("%c",ch);
        a--;
    }
    printf("\n");
}
}