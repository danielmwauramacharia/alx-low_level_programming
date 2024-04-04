#include "main.h"
#include <stdlib.h>
/**
  *str_concat - A function that concatenates 2 strings
  *@s1: The first string
  *@s2: The second string
  *
  *Description:Return a pointer to the new concatenated string
  *If the string is null is treated as an empty string
  *
  *Return: A pointer to the created string
  */
char *str_concat(char *s1, char *s2)
{
	int n = 0, d = 0;
	/*int a = 0, b = 0, c = 0;*/
	int count1 = 0, count2 = 0, j = 0, k = 0, l = 0;
	char *ptr;

/*	if (s1 == NULL && s2 == NULL)
{
		a = 1;
		n = 1;
}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";*/
	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	/*if (count1 == 0 && count2 != 0)
{
		n = count2 + 1;
		b = 1;
}
	if (count1 != 0 && count2 == 0)
{
		c = 1;
		n = count1 + 1;
}*/
	if (count1 != 0 && count2 != 0)
{
		n = count1 + count2 + 2;
		d = 1;
}
	ptr = ((char *)malloc(n * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
/*	if (a)
{
		ptr = "";
}
	if (b)
{
		for (i = 0; i < n; i++)
			*(ptr + i) = s2[i];
		*(ptr + i) = '\0';
}
	if (c)
{
		for (i = 0; i < n; i++)
			*(ptr + i) = s1[i];
		*(ptr + i) = '\0';
}*/
	if (d)
{
	while (j < count1)
{
		if (l == count1 - 1 && s1[j] == ' ')
{
			*(ptr + l) = s1[j];
			l++;
			j++;
			continue;
}
		else if (l == count1 - 1 && s1[j] != ' ')
{
			*(ptr + l) = s1[j];
			l++;
			*(ptr + l) = ' ';
			l++;
			j++;
			continue;
}
		*(ptr + l) = s1[j];
}
	while (k < count2)
{
		*(ptr + l) = s2[k];
		l++;
		k++;
}
	*(ptr + l) = '\0';
}
	return (ptr);
}
