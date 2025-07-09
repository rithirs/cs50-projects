#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    do // Prompt the user for change owed, in cents
    {
        cents = get_int("Change owned : ");
    }
    while (cents < 0);

    int quarters = calculate_quarters(cents);
    cents -= (quarters * 25); // Subtract the value of those quarters from cents
    int dimes = calculate_dimes(cents);
    cents -= (dimes * 10); // Subtract the value of those dimes from remaining cents
    int nickels = calculate_nickels(cents);
    cents -= (nickels * 5); // Subtract the value of those nickels from remaining cents
    int pennies = calculate_pennies(cents);
    cents -= (pennies * 1); // Subtract the value of those pennies from remaining cents

    // Sum the number of quarters, dimes, nickels, and pennies
    printf("%i \n", quarters + dimes + nickels + pennies);
}

int calculate_quarters(int cents) // Calculate how many quarters you should give customer
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int calculate_dimes(int cents) // Calculate how many dimes you should give customer
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

int calculate_nickels(int cents) // Calculate how many nickels you should give customer
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

int calculate_pennies(int cents) // Calculate how many pennies you should give customer
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents -= 1;
    }
    return pennies;
}