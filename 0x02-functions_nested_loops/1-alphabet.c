#include <stdio.h>
#include "main.h"

/**
 * Entry point - main
 * Description: prints lowercase alphabets with declared function
 * Result: 0 if successful
 */
int main(void) {
    print_alphabet();
    return 0;
}

void print_alphabet(void) {
    char lowercase = 'a';

    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    putchar('\n');
}

