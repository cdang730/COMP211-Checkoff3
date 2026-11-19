#include <stdio.h>
#include <string.h>

int main(void) {
    int message = 0b10111;
    int key = 0b11001;

    int encrypted = message ^ key;
    int decrypted = encrypted ^ key;

    printf("Original:  %d\n", message);
    printf("Encrypted: %d\n", encrypted);
    printf("Decrypted: %d\n", decrypted);
}
