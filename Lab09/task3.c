#include <stdio.h>
#include <string.h>

int main() {
    char correctPass[20] = "lab10pass";
    char userPass[20];

    printf("Enter password: ");
    scanf("%s", userPass);
    int result = strcmp(correctPass, userPass);
    
    if (result == 0) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n"); }
    int checkPrefix = strncmp(correctPass, userPass, 3);
    
    if (checkPrefix == 0) {
        printf("First 3 characters match.\n");
    } else {
        printf("First 3 characters do not match.\n");
    }

    return 0;
}