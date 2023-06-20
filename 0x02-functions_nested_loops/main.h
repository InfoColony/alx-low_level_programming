#include <unistd.h>
#include <string.h>


void print_alphabet(void);

void print_alphabet()
{
	int a = 'a';

	for (; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return;
}
