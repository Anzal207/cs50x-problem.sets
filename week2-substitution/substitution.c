#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // set conditions for key
    // // If no cmnd line arg, or more than 1 cmnd line arg
    if (argc != 2)
    {
        printf("USAGE: ./substitution key\n");
        return 1;
    }

    // // check key length
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // check for non-alphabetic characters
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must only contain aplhabetic characters.\n");
            return 1;
        }
    }

    // check for repeated characters(case-insensitive)
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            // compare the characters
            if (toupper(argv[1][i]) == toupper(argv[1][j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }

    // output plaintext
    printf("plaintext: ");

    // get plain text
    string plain = get_string(" ");

    // print ciphertext
    int index;
    char cipher;
    printf("ciphertext: ");

    // loop through plain text
    for (int i = 0; i < strlen(plain); i++)
    {
        // // if uppercase
        if (isupper(plain[i]))
        {
            index = plain[i] - 'A';
            cipher = toupper(argv[1][index]);
            printf("%c", cipher);
        }
        // // if lowercase
        else if (islower(plain[i]))
        {
            index = plain[i] - 'a';
            cipher = tolower(argv[1][index]);
            printf("%c", cipher);
        }
        // // else keep same
        else
        {
            cipher = plain[i];
            printf("%c", cipher);
        }
    }

    // print new line for it to look good
    printf("\n");
}
