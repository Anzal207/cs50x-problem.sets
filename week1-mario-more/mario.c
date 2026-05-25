// libraries
#include <cs50.h>
#include <stdio.h>

// funtion declarations
void print_hash_right(int hash_left);
void print_hash_left(int brick_left);
void print_space_left(int space_left);
void print_space_mid(int space_mid);

int main(void)
{
    // Promt for input
    int height;
    do
    {
        height = get_int("Height: ");
    } // Add conditions
    while (height > 8 || height <= 0);
    // Build the pyramid
    for (int i = 0; i < height; i++)
    {
        print_space_left(height - (i + 1));
        print_hash_left(i + 1);
        print_space_mid(1);
        print_hash_right(i + 1);
    }
}

// building the right side of the pyramid
void print_hash_right(int brick_right)
{
    for (int i = 0; i < brick_right; i++)
    {
        printf("#");
    }
    printf("\n");
}

// building the left side of the pyramid
void print_hash_left(int brick_left)
{
    for (int i = 0; i < brick_left; i++)
    {
        printf("#");
    }
}

// making the left side right-aligned
void print_space_left(int space_left)
{
    for (int i = 0; i < space_left; i++)
    {
        printf(" ");
    }
}

// adding gap in the middle
void print_space_mid(int space_mid)
{
    for (int i = 0; i < space_mid; i++)
    {
        printf("  ");
    }
}
