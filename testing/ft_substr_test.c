#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_substr_test(char const *s, unsigned int start,
size_t len, char const *excpected)
{
    char *result;

    result = ft_substr(s, start, len);
    if (result == NULL && excpected == NULL)
    {
        printf("Null case good \n");
    }
    else if (result == NULL || excpected == NULL)
        printf("Null Case Not good");
    else if (strcmp(result, excpected) != 0)
    {
        printf("===> Erreur <===\n");
        printf("Output attendu : %s, ton output : %s\n", excpected, result);
        printf("\n");
    }
    free(result);
}

int main(void)
{
    ft_substr_test("hello les gars", 0, 14, "hello les gars");
    ft_substr_test("", 0, 14, "");
    ft_substr_test("Holaaa", 14, 17, "");
    ft_substr_test("Holaaa", 2, 4, "laaa");
    ft_substr_test("Holaaa", 2, 10, "laaa");
    ft_substr_test("Holaaa", 0, 2, "Ho");
    ft_substr_test(NULL, 0, 0, NULL);
}