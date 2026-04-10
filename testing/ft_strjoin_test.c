#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_strjoin_test(char const *s1, char const *s2,
char const *excpected)
{
    char *result;

    result = ft_strjoin(s1, s2);
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
    ft_strjoin_test("hello ", "les gars" ,"hello les gars");
    ft_strjoin_test("", "", "");
    ft_strjoin_test("Holaaa", "", "Holaaa");
    ft_strjoin_test("","laaa", "laaa");
    ft_strjoin_test("Holaaa", "laaa", "Holaaalaaa");
    ft_strjoin_test(NULL, "Ho", NULL);
    ft_strjoin_test("Ho", NULL, NULL);
    ft_strjoin_test(NULL, NULL, NULL);
}