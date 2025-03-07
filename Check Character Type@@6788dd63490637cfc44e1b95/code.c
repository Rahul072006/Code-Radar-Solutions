#include <stdio.h>

int main() {
    char ch;

    // Taking input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    }
    // Check if the character is an uppercase letter (A-Z) or lowercase letter (a-z)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert uppercase letters to lowercase by adding 32 (ASCII conversion)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if the letter is a vowel (a, e, i, o, u)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
    }
    // If not a digit or a letter, it is a special character
    else {
        printf("The character is a special character.\n");
    }

    return 0;
}
