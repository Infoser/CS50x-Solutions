#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for ( int 1 = 0; i< strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        printf("Usage: ./caesar key\n");
        return 1;
    }
}