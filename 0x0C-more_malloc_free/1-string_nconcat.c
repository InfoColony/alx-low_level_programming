#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

int lent(char *);

void cpy(char *, char *, int);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p, *p1, *mp;
	unsigned int s1l, s2l, siz, ib;

	p = (s1 == NULL) ? "" : s1;
	p1 = (s2 == NULL) ? "" : s2;
	s1l = lent(p);
	s2l = lent(p1);
	siz = (s2l <= n) ? s1l + s2l : s1l + n;
	mp = malloc((siz + 1) * sizeof(char));
	if (mp == NULL)
		return (NULL);
	cpy(mp, p, 0);
	if (n >= s2l)
	{
		cpy(mp, p1, s1l);
		mp[s1l++] = '\0';
		return (mp);
	}
	for (ib = 0; ib < n; ib++)
	{
		mp[s1l + 1] = p1[ib];
		s1l++;
	}
	mp[siz + 1] = '\0';
	return (mp);
}

int lent(char *sp)
{
	char *s = sp;
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i - 1);
}

void cpy(char *fp, char *fp2, int sp)
{
	char *f2 = fp2;

	while (*f2 != '\0')
	{
		fp[sp] = *f2;
		sp++;
		f2++;
	}
}
