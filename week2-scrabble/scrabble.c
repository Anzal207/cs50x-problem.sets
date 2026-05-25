#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Assign a point to each letter
    int point[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                     1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // Get player 1's word
    string player1 = get_string("PLAYER 1: ");

    // Get player 2's word
    string player2 = get_string("PLAYER 2: ");

    // Capitalize player1's word and give the word its score
    int length1 = strlen(player1);
    int total_score1 = 0;
    for (int i = 0; i < length1; i++)
    {
        char letter1 = toupper(player1[i]);
        if (isalpha(letter1))
        {
            int letter_score1 = letter1 - 'A';
            int final_score1 = point[letter_score1];
            total_score1 = total_score1 + final_score1;
        }
    }

    // Capitalize player2's word and give the word its score
    int length2 = strlen(player2);
    int total_score2 = 0;
    for (int i = 0; i < length2; i++)
    {
        char letter2 = toupper(player2[i]);
        if (isalpha(letter2))
        {
            int letter_score2 = letter2 - 'A';
            int final_score2 = point[letter_score2];
            total_score2 = total_score2 + final_score2;
        }
    }

    // Compare scores and declare result
    if (total_score1 > total_score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (total_score2 > total_score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
