#include<stdio.h>
int main() {
    int n, pos, val, arr[10];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert the element : ");
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &val);

    if(n >= 10) {
        printf("Array is full. Cannot insert new element.\n");
    }
    else if(pos < 0 || pos > n) {
        printf("Invalid position\n");
    }
    else {
        // shift elements right from pos
        for(int i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        // insert the new value
        arr[pos] = val;
        n = n + 1;

        printf("Array after insertion:\n");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
