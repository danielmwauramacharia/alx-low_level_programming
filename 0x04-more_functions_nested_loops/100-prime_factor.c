#include <stdio.h>
#include <math.h>

long LargePrimeFactor(long n);

/**
  *LargePrimeFactor -function that gives the largest prime factor
  *@n: the given number
  *
  *Return: the largest prime factor
  */
long LargePrimeFactor(long n)
{
	long MaxPrime;
	long i;

	MaxPrime = -1;

	for (i = 2; i <= n; i++)
{
		while (n % i == 0)
{
			MaxPrime = i;
			n /= i;
}
}
	return (MaxPrime);
}

/**
  *main -entry point of our main program
  *
  *Return: 0 sucess
  */
int main(void)
{
	long lpf;
	long number;

	number = 612852475143;
	lpf = LargePrimeFactor(number);
	printf("%ld\n", lpf);
	return (0);
}
