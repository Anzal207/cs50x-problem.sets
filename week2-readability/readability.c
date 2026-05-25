#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get input
    string text = get_string("Text: ");
    int letters = 0;
    int words = 1;
    int sentences = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        // count the number of words
        if (isblank(text[i]))
        {
            words++;
        }

        // count the number of letters
        if (isalpha(text[i]))
        {
            letters++;
        }

        // count the number of sentences
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // count avg number of letters per 100 words
    float L = ((float) letters / words) * 100;

    // count avg number of sentences per 100 words
    float S = ((float) sentences / words) * 100;

    // use colem-Liau index to get score
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // round up score
    int grade = round(index);

    // set a min and max limit and then output
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
