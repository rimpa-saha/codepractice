/*
111 111
22   22
3     3   */
#include <stdio.h>

int main() {
    int rows = 4; 
    int totalColumns = 7;

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j <= totalColumns; j++) {
            if (j <= rows - i || j > totalColumns - (rows - i)) {
                printf("%d", i);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


   
