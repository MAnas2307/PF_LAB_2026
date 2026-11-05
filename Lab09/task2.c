#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100];
    int i = 0;
    int j = 0;

    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    while (firstName[i] != '\0') {
        fullName[i] = firstName[i];
        i = i + 1;
    }

    fullName[i] = ' ';
    i = i + 1;

    while (lastName[j] != '\0') {
        fullName[i] = lastName[j];
        i = i + 1;
        j = j + 1;
    }
    fullName[i] = '\0';
    printf("Full name: %s\n", fullName);

    
    return 0;
}