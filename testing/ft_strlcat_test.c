#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> 

static void ft_strlcat_test(const char *src, size_t n)
{
    char dest[1000] = "test";
    char dest2[1000] = "test";

    size_t a = ft_strlcat(dest, src, n);
    size_t b = strlcat(dest2, src, n);
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
    ft_strlcat_test("bon ", 7);
    ft_strlcat_test("ca va la ", 10);
    ft_strlcat_test("", 5);
    ft_strlcat_test("heyy", 6);
    ft_strlcat_test("testebffenialnsj", 22);
    ft_strlcat_test("testt", 1);
    
}