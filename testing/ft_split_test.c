#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_split_test(char const *str, char c ,char **excpected)
{
    char **dest;
    int i;

    i = 0;
    dest = ft_split(str, c);
    if (dest == NULL && excpected == NULL)
        return ;
    else if (dest == NULL || excpected == NULL)
        printf("Null Case Not good\n");
    else
    {
        while (excpected[i] != NULL)
        {
            if (strcmp(dest[i] ,excpected[i]) != 0)
            {
                printf("===> Erreur <===\n");
                printf("Output attendu : %s, ton output : %s\n", excpected[i], dest[i]);
                printf("\n");
            }
            free(dest[i]);
            i ++;
        }
        if (dest[i] != NULL)
        {
            printf("===> Erreur <===\n");
            printf("Pas de NULL a la fin du tableau de string\n");
            printf("\n");
        }
        free(dest);
    }
}

int main(void)
{
    char const *str = "hello les gars";
    char c = ' ';
    char *excpected[] = {"hello", "les", "gars", NULL};
    ft_split_test(str, c ,excpected);
    char const *str2 = "  hello les gars   ";
    char c2 = ' ';
    char *excpected2[] = {"hello", "les", "gars", NULL};
    ft_split_test(str2, c2 ,excpected2);
    char const *str3 = "";
    char c3 = ' ';
    char *excpected3[] = {NULL};
    ft_split_test(str3, c3 ,excpected3);
    ft_split_test(NULL, c, NULL);
    char const *str4 = "hello les gars";
    char c4 = 't';
    char *excpected4[] = {"hello les gars", NULL};
    ft_split_test(str4, c4 ,excpected4);
    char const *str5 = "a,,b,,,c";
    char c5 = ',';
    char *excpected5[] = {"a", "b", "c", NULL};
    ft_split_test(str5, c5 ,excpected5);
    char const *str6 = ",,,,,";
    char c6 = ',';
    char *excpected6[] = {NULL};
    ft_split_test(str6, c6 ,excpected6);
    char const *str7 = "a";
    char c7 = 'c';
    char *excpected7[] = {"a", NULL};
    ft_split_test(str7, c7 ,excpected7);
}