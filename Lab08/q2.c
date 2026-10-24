#include <stdio.h>
void swapValues(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int A, B;

    printf("Enter price A: ");
    scanf("%d", &A);

    printf("ENTER PRICE B: ");
    scanf("%d", &B);

    printf("Before swap: A = %d, B = %d\n", A, B);

    swapValues(&A, &B);

    printf("After SWAP: A = %d, B = %d\n", A, B);

    return 0;
}