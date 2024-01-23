#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a string.
 * @to: Pointer to a string to set the value to.
 *
 * Description: This function updates the value of a pointer to a char
 *              with the value of the specified string.
 * Return: None.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
