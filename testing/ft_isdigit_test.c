#include "libft.h"
#include <stdio.h>
#include <ctype.h>

static void test_ft_isdigit(char *to_test)
{
    int i;
    int result;
    int yours;

    i = 0;
    while (to_test[i] != '\0')
    {
        result = isdigit(to_test[i]);
        yours = ft_isdigit(to_test[i]);
        if ((result != 0) != (yours != 0))
        {
            printf("==> Erreur <===\n");
            printf("Pour le caractere : %c\n ===> Sortie attendue : %d, la votre : %d\n", to_test[i],result, yours);
            printf("\n");
        }
        i ++;
    }
}

int main(void)
{
    char *to_test = "abc98876dEFH876.:abc90";
    test_ft_isdigit(to_test);
    return (0);
}