#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int check_num(char *str)
{
  /* Declaration of variables */
  unsigned int count = 0;

  while (count < strlen(str)) /* Iterate through the string */
  {
    if (!isdigit(str[count])) /* Check if there are any non-digit characters */
    {
      return 0;
    }

    count++;
  }

  return 1;
}

/**
 * main - Entry point of the program.
 * @argc: The count of arguments.
 * @argv: The array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
  /* Declaration of variables */
  int count;
  int str_to_int;
  int sum = 0;

  count = 1;
  while (count < argc) /* Iterate through the array */
  {
    if (check_num(argv[count])) /* Check if the argument contains only digits */
    {
      str_to_int = atoi(argv[count]); /* Convert the argument from string to int */
      sum += str_to_int;
    }
    else /* Condition if one of the numbers contains non-digit symbols */
    {
      printf("Error\n");
      return 1;
    }

    count++;
  }

  printf("%d\n", sum); /* Print the sum */

  return 0;
}
