#include <stdio.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * main - prints "_putchar", followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char s[] = "_putchar\n";
    int i = 0;

    /* Loop through the string and print each character */
    while (s[i])
    {
        _putchar(s[i]);
        i++;
    }

    /* Return 0 to indicate success */
    return (0);
}

