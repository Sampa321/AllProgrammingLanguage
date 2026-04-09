#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    const char *str = "radar"; // Change this to test different strings
    int len = strlen(str);
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
