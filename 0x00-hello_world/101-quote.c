#include <unistd.h>
/**
 * main - Entry Point
 * 
 * Description: this print text without printf or puts and return new line
 * 
 * Reurn: 1
 */
int main(void) {
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return (1);
}
