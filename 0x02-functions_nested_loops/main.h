#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);


void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#endif /* MAIN_H */
