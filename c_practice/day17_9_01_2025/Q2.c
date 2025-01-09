/* A
  ABC
 ABCDE
ABCDEFG*/ 

#include <stdio.h>
int main() {
    int rows = 4; 
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
