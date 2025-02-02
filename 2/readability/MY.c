#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] > 65 && text[i] < 90) || (text[i] > 97 && text[i] < 122))
        {
            letters++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
    }

    // Calculation!!
    float L = (float) letters / (float) 100 * words;
    float S = (float) sentences / (float) 100 * words;

    int subindex = (0.0588 * L - 0.296 * S - 15.8);
    int index = round(subindex);
    // Printing the Results!!
    if (index < 1)
    {
        printf("Before grade 1 \n");
    }
    else if (index > 16)
    {
        printf("Grade 16+");
    }
    else
    {
        printf("Grade %i", index);
    }
}



