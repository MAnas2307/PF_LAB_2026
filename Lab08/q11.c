#include <stdio.h>
int square(int x) {
    return x * x; }

int negate(int x) {
    return -x; }

int isEven(int x) {
    if (x % 2 == 0) {
        return 1;
    }
    return 0;
}

int isPositive(int x) {
    if (x > 0) {
        return 1; }
    return 0;
}

void applyToArray(int *arr, int n, int (*fn)(int)) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = fn(arr[i]);}
}

int countif(const int *arr, int n, int (*pred)(int)) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (pred(arr[i])) {
            count++; }
    }
    return count; }

void printGeneric(void *data, char type, int n) {
    int i;
    if (type == 'i') {
        int *p = (int *)data;
        for (i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    } 
    else if (type == 'f') {
        float *p = (float *)data;
        for (i = 0; i < n; i++) {
            printf("%.2f ", p[i]);
        }
        printf("\n");
    } 
    else if (type == 'c') {
        char *p = (char *)data;
        for (i = 0; i < n; i++) {
            printf("%c ", p[i]);
        }
        printf("\n");
    } 
    else {
        printf("Invalid type '%c' for printGeneric\n", type);
    }
}

int main() {
    int n;
    int arr[50];
    int i;

    printf("Enter n (1-50): ");
    scanf("%d", &n);

    while (n < 1 || n > 50) {
        printf("Invalid size\n");
        printf("Enter n (1-50): ");
        scanf("%d", &n);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("OriginaL ");
    printGeneric(arr, 'i', n);

    applyToArray(arr, n, negate);

    printf("After neegate: ");
    printGeneric(arr, 'i', n);

    int posCount = countif(arr, n, isPositive);
    printf("Positive VAlues after negate: %d\n", posCount);

    int evenCount = countif(arr, n, isEven);
    printf("Even values after negate: %d\n", evenCount);

    float floatArr[] = {1.50, 2.25};
    printf("Float print (type f] : ");
    printGeneric(floatArr, 'f', 2);

    printGeneric(arr, 'x', n);

    return 0;
}