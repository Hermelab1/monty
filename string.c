#include "monty.h"

/**
 * _strcompare - to compare two string
 *
 * @s1: 1st string to compared
 * @s2: 2nd string to compared
 * Return: 0 if s1 and s2 are equals
 */
int _strcompare(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * _strsearch - search if a char is inside a string
 *
 * @s: string to review
 * @c: char to find
 * Return: 1 if success 0 if not
 */
int _strsearch(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (i);
		}
	}
	if (s[i] == c)
		return (1);
	else
		return (0);
}

/**
 * _strcuttok - function to ut a string into tokens depending of the delimit
 * @s: string to cut
 * @d: delimiters
 * Return: 1st partition
 */
char *_strcuttok(char *s, char *d)
{
	static char *lasts;
	int i = 0;
	int j = 0;

	if (!s)
		s = lasts;
	while (s[i] != '\0')
	{
		if (_strsearch(d, s[i] == 0 && s[i + 1] == '\0')
		{
			lasts = s + i + 1;
			*lasts = '\0';
			s = s + j;
			return (s);
		}
		else if (_strsearch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 0)
			i++;
		else if (_strsearch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 1)
		{
			lasts = s + i + 1;
			*lasts = '\0';
			lasts++;
			s = s + j;
			return (s);
		}
		else if (_strsearch(d, s[i]) == 1)
		{
			j++;
			i++;
		}
	}
	return (NULL);
}
