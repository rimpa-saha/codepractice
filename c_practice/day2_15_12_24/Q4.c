/* Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10*/
   #include<stdio.h>
int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",a);
        a++;
    }
    printf("\n");
}
    return 0;
}