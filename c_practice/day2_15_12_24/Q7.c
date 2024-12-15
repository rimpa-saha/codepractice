/* Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :

   1
   1 3
   1 3 5
   1 3 5 7*/
   #include<stdio.h>
   int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
for( int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a=a+2;
    }
    printf("\n");
}
return 0;
   }


   