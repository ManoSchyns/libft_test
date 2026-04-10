#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_strtrim_test(char const *s1, char const *set,
char const *excpected)
{
    char *result;

    result = ft_strtrim(s1, set);
    if (result == NULL && excpected == NULL)
    {
        printf("Null case good \n");
    }
    else if (result == NULL || excpected == NULL)
        printf("Null Case Not good\n");
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
    ft_strtrim_test("hello ", "ll" ,"hello ");
    ft_strtrim_test("heyy", "hy", "e");
    ft_strtrim_test("", "okk", "");
    ft_strtrim_test("test","t", "es");
    ft_strtrim_test("iioi   Hola     iiii", "i ", "oi   Hola");
    ft_strtrim_test("&&&test.on.y va.aller////", "./ &", "test.on.y va.aller");
    ft_strtrim_test(NULL, "Ho", NULL);
    ft_strtrim_test("Ho", NULL, "Ho");
    ft_strtrim_test(NULL, NULL, NULL);
}