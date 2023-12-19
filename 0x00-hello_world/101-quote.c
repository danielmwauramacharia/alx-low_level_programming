#include <unistd.h>

/**
 * main - Entry point of our program
 * Return: 1 (success)
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, "
                          "2015-10-19";

    write(2, message, sizeof("and that piece of art is useful\" - Dora Korpar, "
                             "2015-10-19"));

    return (1);
}
