#include "main.h"
#include <stdlib.h>

/**
 * strtow - A funtion that creates an array of strings
 * @str: An input to the function
 * Return: return the created string array
 */
void func(char **, char *, int *);

char **strtow(char *str)
{
	int len = 0;
	char *i = str;
	int *j = 0;
	char **st;
	int hld = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*i != '\0')
	{
		if (*i != 32)
		{
			while(*i != 32)
			{
				i++;
				len++;
				if (*i == 32 || *i == '\0')
					hld += 1;
				break;
			}
			continue;
		}
		len++;
		i++;
	}
	i=str;
	st = malloc((hld + 1) * sizeof(char *));
	if (st == NULL || hld == 0)
		return (NULL);
	func(st, str, &len);
	return (st);
}


void func(char **st, char *str, int *j)
{
	char *i = str;
     while (*i != '\0')
    {
        if (*i != 32)
        {
            char *t = i;
            int wl = 0;
            while(*i != 32)
            {
                wl++;
                i++;
                if (*i == '\0' || *i == 32)
                {
                    int sa = 0;
                    st[*j] = malloc((wl + 1) * sizeof(char));
                    while(*t != *i)
                    {
                        st[*j][sa] = *t;
                        t++;
                        sa++;
                        if (*t == *i)
                        {
                            st[*j][sa] = '\0';
                            (*j)++;
                            break;
                        }
                    }
                    break;
                }
            }
            continue;
        }
        i++;
    }
}
