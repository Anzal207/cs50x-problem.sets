#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // condition the key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // get key
    int key = atoi(argv[1]);

    // get plain text
    string plain = get_string("Plaintext:  ");

    // cipher
    printf("Ciphertext: ");
    char cipher;

    // encipher
    for (int i = 0; i < strlen(plain); i++)
    {
        if (isalpha(plain[i]))
        {
            // shift character here and print ciphertext

            if (isupper(plain[i]))

            {
                cipher = ((plain[i] - 'A' + key) % 26) + 'A';
                printf("%c", cipher);
            }
            else if (islower(plain[i]))
            {
                cipher = ((plain[i] - 'a' + key) % 26) + 'a';
                printf("%c", cipher);
            }
        }
        else
        {
            cipher = plain[i];
            printf("%c", cipher);
        }
    }

    printf("\n");
    return 0;
}
