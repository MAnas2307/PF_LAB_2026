#include <stdio.h>
int main() {
    char cities[5][30];
    int i = 0;
    int j = 0;
    int maxLen = 0;
    int maxIndex = 0;

    printf("Enter 5 city names:\n");
    for (i = 0; i < 5; i = i + 1) {
        printf("City %d: ", i + 1);
        fgets(cities[i], 30, stdin);
        j = 0;
        while (cities[i][j] != '\0') {
            if (cities[i][j] == '\n') {
                cities[i][j] = '\0';
                break; }
            j = j + 1; }
    }

    printf("\nAll city names:\n");
    for (i = 0; i < 5; i = i + 1) {
        printf("%s\n", cities[i]);
    }
    for (i = 0; i < 5; i = i + 1) {
        int currentLen = 0;
        j = 0;
        while (cities[i][j] != '\0') {
            currentLen = currentLen + 1;
            j = j + 1; }

        if (currentLen > maxLen) {
            maxLen = currentLen;
            maxIndex = i; }
    }

    printf("\nLongest city name: %s\n", cities[maxIndex]);
    printf("Length: %d\n", maxLen);

    return 0;
}