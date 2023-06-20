#include <unistd.h>
#include <string.h>


int _putchar()
{
	char word[] ="_putchar";
	int wlen = strlen(word);
	
	write(1,word,wlen)
	return (0);
}
