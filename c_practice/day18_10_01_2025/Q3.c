/*
0123 0123
012   012
01     01
0       0   */
#include <stdio.h>
int main() {
    int rows;
    printf("enter the number of rows:");
    scanf("%d",&rows); 
 for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("%d",j);
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < rows - i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
