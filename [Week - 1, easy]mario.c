/* This program builds a half-pyramid of bricks (like in Super Mario) using hashes (#).
The problem was to enter a height (preferably positive intgers) and the program then prints a
right-aligned staircase of that height. For example, if the user inputs 4, the output will be:
   #
  ##
 ###
####
Each row has:
 - Spaces to align the pyramid to the right.
 - Hashes (#) that increase by one per row.
The program uses loops and user input validation to ensure a correct height is entered, and then
prints the pyramid line by line. */

#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int height;
    do // Prompt the user for the pyramid's height
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    for (int i = 0; i < height; i++) // Print a pyramid of that height
    {
        for (int j = 1; j < (height - i); j++) // Print spaces
        {
            putchar(' ');
        }
        for (int k = 0; k <= i; k++) // Print bricks
        {
            putchar('#');
        }
        printf("\n");
    }
}
