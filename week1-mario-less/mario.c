#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);
void print_space(int space);

int main(void)
{
    int height;
    do
    {
        height = get_int("What do you want the height to be? ");
    }
    while (height < 1);

    for (int i = 0; i < height; i++)
    {
        print_space(height - (i + 1));
        print_row(i + 1);
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_space(int space)
{
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
}
