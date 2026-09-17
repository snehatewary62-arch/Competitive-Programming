#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int caseInsensitiveCompare(char str1[], char str2[]) {

    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {

        if (tolower((unsigned char)str1[i]) !=
            tolower((unsigned char)str2[i])) {
            return 0;
        }

        i++;
    }

    return str1[i] == '\0' && str2[i] == '\0';
}

int main() {

    int n;
    char names[MAX][50];
    char searchName[50];
    int position;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");

    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%49s", names[i]);
    }

    printf("\nEnter name to search: ");
    scanf("%49s", searchName);

    // Case-sensitive search
    position = -1;

    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], searchName) == 0) {
            position = i + 1;
            break;
        }
    }

    if (position != -1) {
        printf("\nCase-sensitive search:\n");
        printf("Student found at position %d\n", position);
    } else {
        printf("\nCase-sensitive search:\n");
        printf("Student not found\n");
    }

    position = -1;

    for (int i = 0; i < n; i++) {
        if (caseInsensitiveCompare(names[i], searchName)) {
            position = i + 1;
            break;
        }
    }

    if (position != -1) {
        printf("\nCase-insensitive search:\n");
        printf("Student found at position %d\n", position);
    } else {
        printf("\nCase-insensitive search:\n");
        printf("Student not found\n");
    }

    return 0;
}
