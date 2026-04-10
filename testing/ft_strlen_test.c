#include "libft.h"
#include <stdio.h>
#include <string.h>

static void test_ft_strlen(char *to_test[])
{
    int i;
    int result;
    int yours;

    i = 0;
    while (to_test[i] != NULL)
    {
        result = strlen(to_test[i]);
        yours = ft_strlen(to_test[i]);
        if (result != yours)
        {
            printf("==> Erreur <===\n");
            printf("Pour le caractere : %s\n ===> Sortie attendue : %d, la votre : %d\n", to_test[i],result, yours);
            printf("\n");
        }
        i ++;
    }
}

int main(void)
{
    char *to_test[] = {"","heyy", "&", "juezfhbeufhbeuifbheuifbhufihbfeikeflk",NULL};
    test_ft_strlen(to_test);
    return (0);
}