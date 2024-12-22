/*Write a C program that calculates the sum of numbers from 1 to 5 using a while loop.*/
#include <stdio.h>

int main() {
    int number = 1; 
    int sum = 1;
    while (number <= 5) {
        sum += number;
        printf("Current number: %d, Current sum: %d\n", number, sum);
        number++;
    }

    return 0; 
}
