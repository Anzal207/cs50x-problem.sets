// libraries
#include <cs50.h>
#include <stdio.h>

// function declarations

int main(void)
{
    // Prompt for input
    long number = get_long("Number: ");
    // Get each digit
    int n1 = number % 10;
    int n2 = (number / 10) % 10;
    int n3 = (number / 100) % 10;
    int n4 = (number / 1000) % 10;
    int n5 = (number / 10000) % 10;
    int n6 = (number / 100000) % 10;
    int n7 = (number / 1000000) % 10;
    int n8 = (number / 10000000) % 10;
    int n9 = (number / 100000000) % 10;
    int n10 = (number / 1000000000) % 10;
    int n11 = (number / 10000000000) % 10;
    int n12 = (number / 100000000000) % 10;
    int n13 = (number / 1000000000000) % 10;
    int n14 = (number / 10000000000000) % 10;
    int n15 = (number / 100000000000000) % 10;
    int n16 = (number / 1000000000000000) % 10;

    // step 1
    int a1 = n2 * 2;
    int a2 = n4 * 2;
    int a3 = n6 * 2;
    int a4 = n8 * 2;
    int a5 = n10 * 2;
    int a6 = n12 * 2;
    int a7 = n14 * 2;
    int a8 = n16 * 2;


    a1 = (a1 / 10) + (a1 % 10);
    a2 = (a2 / 10) + (a2 % 10);
    a3 = (a3 / 10) + (a3 % 10);
    a4 = (a4 / 10) + (a4 % 10);
    a5 = (a5 / 10) + (a5 % 10);
    a6 = (a6 / 10) + (a6 % 10);
    a7 = (a7 / 10) + (a7 % 10);
    a8 = (a8 / 10) + (a8 % 10);

    // step 2
    int step_2 = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 ;
    int step_3 = n1 + n3 + n5 + n7 + n9 + n11 + n13 + n15 ;
    int step_4 = step_3 + step_2;
    int step_5 = step_4 % 10;
    if (step_5 == 0)
    {
        if (n16 == 4 || n13 == 4)
        {
            printf("VISA\n");
        }
        else if (n16 == 5 && (n15 == 1 || n15 == 2 || n15 == 3 || n15 == 4 || n15 == 5))
        {
            printf("MASTERCARD\n");
        }
       else if (n15 == 3 && (n14 == 4 || n14 == 7))
        {
            printf("AMEX\n");
        }
        else
    {
        printf("INVALID\n");
    }
    }
    else
    {
        printf("INVALID\n");
    }
}
