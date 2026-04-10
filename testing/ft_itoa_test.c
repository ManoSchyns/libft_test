#include "libft.h"
#include <string.h>
#include <stdio.h>

static void ft_itoa_test(int n, char *result)
{
    char *yours;

    yours = ft_itoa(n);

    if (strcmp(result, yours) != 0)
    {
        printf("==> Erreur <===\n");
            printf("Sortie attendue : %s, la votre : %s\n", result, yours);
            printf("\n");
    }
    free(yours);
}

int main()
{
    ft_itoa_test(99, "99");
    ft_itoa_test(-99, "-99");
    ft_itoa_test(0 , "0");
    ft_itoa_test(-1, "-1");
    ft_itoa_test(1, "1");
    ft_itoa_test(87876755, "87876755");
    ft_itoa_test(-8767868, "-8767868");
    ft_itoa_test(-2147483648, "-2147483648");
    ft_itoa_test(2147483647, "2147483647");
}