/*
1234567
123 567
12   67
1     7  */
#include <stdio.h>

int main() {
    int rows = 4; 
    int totalColumns = 7;

    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= totalColumns; j++) {
            if (j <= rows - i || j > totalColumns - (rows - i)) {
                printf("%d", j);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


   
