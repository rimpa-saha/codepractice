// write a program to print fibonacci series
#include <stdio.h>
int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}