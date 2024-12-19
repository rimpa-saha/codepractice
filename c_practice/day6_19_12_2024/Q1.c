/*1. Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.*/
#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d;
float x1,x2;
printf("enter the value of a,b,c" );
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0){
    printf("both roots are equal");
    x1=-b/2.0*a;
    x1=x2;
    printf("\nfirst root=%f",x1);
    printf("\nsecond root=%f",x2);
}
else if(d>0){
    printf("\nboths root are real and diffrent");
    x1 = (-b + sqrt(d)) / (2 * a);  
       x2 = (-b - sqrt(d)) / (2 * a); 
       printf("First  Root Root1 = %f\n", x1); 
       printf("Second Root Root2 = %f\n", x2);
   }
   else { 
       printf("Roots are imaginary;\nNo Solution. \n"); 
}
    return 0;
}
    