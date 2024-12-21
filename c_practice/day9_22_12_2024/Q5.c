/*Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.*/
#include <stdio.h>
int main() {
    int i = 0;  
 printf("Numbers from 0 to 10:\n");
    while (i <= 10) {
        printf("%d ", i);  
        i++;  
    }
printf("\n");  
 i = 10;  
 printf("\nNumbers from 10 to 0:\n");
	while (i >= 0) {
        printf("%d ", i);  
        i--;  
    }

    return 0; 
}
