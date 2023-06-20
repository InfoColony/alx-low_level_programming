#include <unistd.h>


void print_alphabet(void);

void print_alphabet()
{
	char a = 'a';
	char n = '\n';

	for (; a <= 'z'; a++)
	{
		write(1,&a,1);
	}
	write(1,n,1);
	return;
}
