#include <stdio.h>
int main() {
    char name[50];
    char copy[50];
    int i = 0;
    int len = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0') {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
        i = i + 1;
    }
    while (name[len] != '\0') {
        len = len + 1;
    }
    for (i = 0; i <= len; i = i + 1) {
        copy[i] = name[i];
    }

    printf("Length of the name: %d\n", len);
    printf("Copied name: %s\n", copy);
    printf("Sizeof array: %lu\n", sizeof(name));
    printf("Length (strlen equivalent): %d\n", len);

    return 0;
}