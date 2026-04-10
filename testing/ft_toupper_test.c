#include "libft.h"
#include <stdio.h>
#include <ctype.h>

static void test_ft_toupper(char *to_test)
{
    int i;
    int result;
    int yours;

    i = 0;
    while (to_test[i] != '\0')
    {
        result = toupper(to_test[i]);
        yours = ft_toupper(to_test[i]);
        if (result != yours)
        {
            printf("==> Erreur <===\n");
            printf("Pour le caractere : %c\n ===> Sortie attendue : %c, la votre : %c\n", to_test[i],result, yours);
            printf("\n");
        }
        i ++;
    }
}

int main(void)
{
    char *to_test = "abc988\n76dEFH876.:abc90";
    test_ft_toupper(to_test);
    return (0);
}