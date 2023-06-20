#include "main.h"

/**
 *main -Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int wlen = strlen(word);
	
	write(1, word, wlen);
	return (0);
}
