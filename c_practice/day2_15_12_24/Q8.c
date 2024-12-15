/* Write a program in C to make such a pattern like a right angle triangle with the number increased by 1.

The pattern like :

   A
   A B
   A B C
   A B C D */
   #include<stdio.h>
   int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
for( int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        int d =64+a;
        char ch=(char)d;
        printf("%c ",ch);
        a++;
    }
    printf("\n");
}
return 0;
   }


