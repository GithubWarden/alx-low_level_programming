#include "main.h"

/**
 * Entry point - main
 * Description: prints lowercase alphabets with declared function
 * Result: 0 if successful
 */

void print_alphabet(void) {
    char lowercase = 'a';

    while (lowercase <= 'z') {
       _putchar(lowercase);
        lowercase++;
    }

    _putchar('\n');
}

