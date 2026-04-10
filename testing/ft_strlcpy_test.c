#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> 

static void ft_strlcpy_test(const char *src, size_t n)
{
    char dest[1000];
    char dest2[1000];

    size_t a = ft_strlcpy(dest, src, n);
    size_t b = strlcpy(dest2, src, n);
    if (a != b)
    {
        printf("==> Erreur valeur retour <===\n");
        printf("Sortie attendue : %zu, la votre : %zu\n", b ,a);
        printf("\n");
    }
    else if(strcmp(dest, dest2) != 0)
    {
        printf("==> Erreur String mal copié <===\n");
        printf("Sortie attendue : %s, la votre : %s\n", dest2, dest);
        printf("\n");
    }
}

int main(void)
{
    ft_strlcpy_test("testt", 4);
    ft_strlcpy_test("testt", 2);
    ft_strlcpy_test("", 0);
    ft_strlcpy_test("heyy", 0);
    ft_strlcpy_test("testebffenialnsj", 10);
    ft_strlcpy_test("testt", 1);
}