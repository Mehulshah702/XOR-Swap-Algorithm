#include <stdio.h>

void swapWithoutThirdVariable(int *a, int *b) {

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;

    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("Before swapping : x = %d, y = %d\n", x, y);

    swapWithoutThirdVariable(&x, &y);

    printf("After swapping : x = %d, y = %d\n", x, y);

    return 0;
}
