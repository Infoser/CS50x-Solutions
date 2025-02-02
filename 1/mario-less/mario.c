#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting input from user
    int size;
    do
    {
        size = get_int("Size:  ");
    }
    while (size < 1 || size > 8);

    // Making the pyramid!
    int i, j, k;

    for (i = 0; i < size; i++)
    {
        // code for spaces
        for (k = 0; k < size - i - 1; k++)
        {
            printf(" ");
        }
        // Code for hashes
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}