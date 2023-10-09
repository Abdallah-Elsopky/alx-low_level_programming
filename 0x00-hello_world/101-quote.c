#include <unistd.h>
/**
 * main - Entry Point
 * 
 * Description: this print text without printf or puts and return new line
 * 
 * Return: 1
*/
int main(void) {
	char quo [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1,quo,59);
	return (1);
}
