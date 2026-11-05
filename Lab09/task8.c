#include <stdio.h>
int main() {
    char s[100];
    char t[100];
    int i = 0;
    int j = 0;

    printf("Enter string s: ");
    scanf("%s", s);

    printf("Enter string t: ");
    scanf("%s", t);

    while (s[i] != '\0' && t[j] != '\0') {
        if (s[i] == t[j]) {
            i = i + 1;
        }
        j = j + 1;
    }

    if (s[i] == '\0') {
        printf("true\n");}
    else {
        printf("false\n"); }

    return 0;
}