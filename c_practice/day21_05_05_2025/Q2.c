//write a function thats printf namaste if user is indian & bonjur if the user is french.

#include<stdio.h>
 void namaste();
 void bonjur();

 int main(){
   char ch;
   printf("enter f for french and enter i for indian:");
   scanf("%c",&ch);
   if('i'==ch){
    namaste();
   }
   else{
    bonjur();
   }
 }
 void namaste(){
    printf("namaste\n");
 }
void bonjur(){
    printf("bonjur\n");
}