/*Write a program in C to make a pyramid pattern with numbers increased by 1.

   1 
  2 3 
 4 5 6 
7 8 9 10   */
#include <stdio.h>  
void main() {
   int  spc, rows, k, t = 1; 
   printf("Input number of rows : ");  
   scanf("%d", &rows);  
   spc = rows + 4 - 1;  
   for (int i = 1; i <= rows; i++) {  
      for (int k = spc; k >= 1; k--) {  
         printf(" ");
      }

      for (int j = 1; j <= i; j++) {  
         printf("%d ", t++);  
      }

      printf("\n");  
      spc--; 
   }
}