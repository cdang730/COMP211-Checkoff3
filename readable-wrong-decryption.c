
#include <stdio.h>
#include <string.h>

int main(void) {
    char message[] = "HELLO";
    char key[] = "abcde";
    char wrongKey[] = "~h}dn";
    char encrypted[sizeof(message)];
    char decrypted[sizeof(message)];
    char wrongDecrypted[sizeof(message)];

    int length = strlen(message);

    // Encrypt the message
    for (int i = 0; i < length; i++) {
        encrypted[i] = message[i] ^ key[i];
    }
    encrypted[length] = '\0';

    // Decrypt using the same key
    for (int i = 0; i < length; i++) {
        decrypted[i] = encrypted[i] ^ key[i];
    }
    decrypted[length] = '\0';

    for (int i = 0; i < length; i++) {
        wrongDecrypted[i] = encrypted[i] ^ wrongKey[i];
    }
    wrongDecrypted[length] = '\0';

    printf("Original message: %s\n", message);
    printf("Secret key: %s\n", key);
    printf("Encrypted message: %s\n", encrypted);
    printf("Decrypted message: %s\n", decrypted);
    printf("Wrong key: %s\n", wrongKey);
    printf("Wrong decryption: %s\n", wrongDecrypted);

    return 0;
}
