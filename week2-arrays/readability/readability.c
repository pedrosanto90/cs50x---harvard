#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main(void)
{

    int letters = 0;
    int words = 0;
    int sentences = 0;

    // prompt the user for an input
    string text = get_string("Text: ");

    for (int i = 0; i < strlen(text); i++)
    {
        // check if element is alpha
        // count the number of letters
        if (isalpha(text[i]))
        {
            letters++;
        }

        // count the number of words
        else if (text[i] == ' ')
        {
            words++;
        }

        // count the number of sentences
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    words+=1;

    float L = letters / (float) words * 100;
    float S = sentences / (float) words * 100;

    // calculate the grade level
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // printing the grade
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
