#include <stdio.h>
#include <string.h>
int main() {
    char names[5][50];
    char temp[50];
    int i = 0;
    int j = 0;
    printf("Enter 5 student names:\n");
    for (i = 0; i < 5; i = i + 1) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); }
    for (i = 0; i < 4; i = i + 1) {
        for (j = 0; j < 4 - i; j = j + 1) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp); }
        }
    }

    printf("\nSorted student names:\n");
    for (i = 0; i < 5; i = i + 1) {
        printf("%s\n", names[i]);
    }

    return 0;
}