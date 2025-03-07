#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if the letter is a vowel (a, e, i, o, u)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } else {
            printf("Constant");
        }
    }
    // If not a digit or a letter, it is a special character
    else {
        printf("Special Character");
    }

    return 0;
}
