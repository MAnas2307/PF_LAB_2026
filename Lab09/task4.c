#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
        i = i + 1;
    }
    char *p = strchr(sentence, 'a');
    
    if (p != NULL) {
        int index = p - sentence;
        printf("First 'a' found at index %d\n", index);
    } else {
        printf("Character 'a' not found.\n");
    }

    char *wordCheck = strstr(sentence, "good");    
    if (wordCheck != NULL) {
        printf("Word 'good' found.\n");
    } else {
        printf("Word 'good' not found.\n");
    }

    return 0;
}