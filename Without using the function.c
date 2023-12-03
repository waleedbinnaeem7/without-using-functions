#include <stdio.h>
#include <string.h> // Include the string.h library for string functions

// a. Checking if two strings are exactly equal without using strcmp()
int areEqual(const char *str1, const char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0') {
            return 1; // Strings are equal
        }
        str1++;
        str2++;
    }
    return 0; // Strings are not equal
}

int main() {
    // Part a: Checking if two strings are exactly equal
    char str1[] = "Hello";
    char str2[] = "Hello";

    if (areEqual(str1, str2)) {
        printf("a. The two strings are exactly equal.\n");
    } else {
        printf("a. The two strings are not equal.\n");
    }

    // Part b: Concatenating two strings without strcat()
    char str3[50];
    strcpy(str3, "Hello, "); // Use strcpy to copy the initial content

    char str4[] = "world!";

    // b. Concatenating two strings without using strcat()
    int len = strlen(str3);
    while (*str4 != '\0') {
        str3[len] = *str4;
        len++;
        str4++;
    }

    str3[len] = '\0'; // Null-terminate the concatenated string

    printf("b. Concatenated String: %s\n", str3);

    // Part c: Copying one string into another without strcpy()
    char source[] = "This is the source string.";
    char destination[50]; // Make sure the destination has enough space

    // c. Copying one string into another without using strcpy()
    int i;
    for (i = 0; source[i] != '\0' && i < sizeof(destination) - 1; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Null-terminate the destination string

    printf("c. Copied String: %s\n", destination);

    return 0;
}
