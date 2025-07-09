/* This program prints a double half-pyramid like in Super Mario, based on a user-entered height
(1–8). Each row has two pyramids of '#' symbols separated by two spaces. For example, height 4
outputs:
   #  #
  ##  ##
 ###  ###
####  ####

This program uses loops to handle spaces and hashes, and validates input using a do-while loop.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; // Prompt the user for the pyramid's height between 1 to 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= (height - i); j++) // Print front spaces
        {
            printf(" ");
        }

        for (int l = 1; l <= i; l++) // Print left bricks
        {
            printf("#");
        }

        printf("  "); // Print the space in-between

        for (int r = 1; r <= i; r++) // Print right bricks
        {
            printf("#");
        }
        printf("\n");
    }
}
