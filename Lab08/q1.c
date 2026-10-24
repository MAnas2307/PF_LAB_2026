#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    int scores[20];

    printf("Enter number of scores: ");
    scanf("%d", &n);

    while (n < 1 || n > 20) {
        printf("Invalid SIZE! Enter again: ");
        scanf("%d", &n);
    }

    printf("Enter scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    printf("Before sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    bubbleSort(scores, n);
    printf("AFTER SORTING : ");
    for (i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;
}
