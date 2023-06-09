#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description: This program prints all the command-line arguments it receives.
 * Each argument is printed on a new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++)
  {
    printf("%s\n", argv[i]);
  }

  return 0;
}
