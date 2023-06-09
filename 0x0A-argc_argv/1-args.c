#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description: This program prints the number of arguments passed to the program.
 * It ignores the argv parameter and only uses the argc parameter to calculate the count.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
  (void) argv; /* Ignoring argv to suppress compiler warnings */
  printf("%d\n", argc - 1);

  return 0;
}
