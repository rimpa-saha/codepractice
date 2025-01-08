/*Write a C program that accepts some integers from the user and finds the highest value and the input position.
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5 */
#include <stdio.h>

int main() {
    int numbers[5];
    int i, highest, position;

    printf("Input 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    highest = numbers[0];
    position = 1;
    for (i = 1; i < 5; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
            position = i + 1;
        }
    }
    printf("\nHighest value: %d\n", highest);
    printf("Position: %d\n", position);

    return 0;
}
