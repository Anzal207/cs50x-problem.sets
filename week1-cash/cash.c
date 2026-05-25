#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    int coins = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    while (cents >= quarter)
    {
        cents = cents - quarter;
        coins = coins + 1;
    }
    while (cents >= dime)
    {
        cents = cents - dime;
        coins = coins + 1;
    }
    while (cents >= nickel)
    {
        cents = cents - nickel;
        coins = coins + 1;
    }
    while (cents >= penny)
    {
        cents = cents - penny;
        coins = coins + 1;
    }
    printf("Number of coins:%i\n", coins);
}
