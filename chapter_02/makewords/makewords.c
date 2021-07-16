/**
 *
 * Splits the contents of a file into words
 *
 */

#include <stdio.h>
#include <ctype.h>


static void skipnoise(void)
{
    char c; 

    while ((c = fgetc(stdin)) != EOF)
    {
        if (isalphanum(c))
        {
            ungetc(stdin);
            break;
        }
    }

    return; 
}


void makewords(void)
{
    while ((c = fgetc(stdin)) != EOF)
    {
        if (isalphanum(c))
            fputc(c, stdout);
        else
        {
            fputc(20, stdout);
            skipnoise(); 
        }
    }
    return;
}


int main(void)
{
    makewords(); 
    return 0; 
}
