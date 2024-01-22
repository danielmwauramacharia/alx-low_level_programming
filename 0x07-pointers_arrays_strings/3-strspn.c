/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to check.
 * @accept: Substring of characters.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int matchCount = 0;
	int prevCount;

	while (*s)
{
		int i = 0;

		prevCount = matchCount;
		while (*(accept + i) != '\0')
{
			if (*(accept + i) == *s)
{
				matchCount++;
}
			i++;
}

		if (prevCount == matchCount)
{
			break;
}
		s++;
}
		return (matchCount);
}
