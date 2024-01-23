#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, prints the minimum number of coins for change
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Description: Prints the minimum number of coins needed for change
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int numQuarters, numDimes, numNickels, numTwoCents, numPennies;
	int remainingCents, remainingAfterDimes, remainingAfterNickels, totalCoins;

	if (argc != 2)
{
		printf("Error\n");
		return (1);
}
	else if (atoi(argv[1]) < 0)
{
		printf("0\n");
}
	else
{
		numQuarters = atoi(argv[1]) / 25;
		remainingCents = atoi(argv[1]) % 25;

		numDimes = remainingCents / 10;
		remainingAfterDimes = remainingCents % 10;

		numNickels = remainingAfterDimes / 5;
		remainingAfterNickels = remainingAfterDimes % 5;

		numTwoCents = remainingAfterNickels / 2;
		numPennies = remainingAfterNickels % 2;

		totalCoins = numQuarters + numDimes + numNickels + numTwoCents + numPennies;

		printf("%d\n", totalCoins);
}
	return (0);
}
