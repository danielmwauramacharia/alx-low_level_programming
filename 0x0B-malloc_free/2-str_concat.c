#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    int count1 = 0, count2 = 0, total_length = 0;
    char *ptr, *temp;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[count1] != '\0')
        count1++;
    while (s2[count2] != '\0')
        count2++;

    total_length = count1 + count2;

    ptr = malloc((total_length + 1) * sizeof(char));
    if (ptr == NULL)
        return NULL;

    temp = ptr;
    while (*s1 != '\0') {
        *temp = *s1;
        temp++;
        s1++;
    }

    while (*s2 != '\0') {
        *temp = *s2;
        temp++;
        s2++;
    }

    *(ptr + total_length) = '\0';

    return ptr;
}
