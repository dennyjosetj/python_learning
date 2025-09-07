#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    scanf("%s", input);

    if (is_palindrome(input)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
