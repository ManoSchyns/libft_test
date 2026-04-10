#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void test_ft_atoi(char *to_test[])
{
    int i;
    int result;
    int yours;

    i = 0;
    while (to_test[i] != NULL)
    {
        result = atoi(to_test[i]);
        yours = ft_atoi(to_test[i]);
        if (result != yours)
        {
            printf("==> Erreur <===\n");
            printf("Sortie attendue : %d, la votre : %d\n", result, yours);
            printf("\n");
        }
        i ++;
    }
}

int main(void)
{
    char *to_test[] = {"5","-5","0","578876","","-99756","   9","576o","-576o","--8","   +87","abc123", NULL};
    test_ft_atoi(to_test);
    return (0);
}