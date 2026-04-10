#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_memchr_test_str(const void *s, int c, size_t n)
{
    char*yours;
    char *result;

    yours =(char *) ft_memchr(s,c,n);
    result = (char *) memchr(s,c,n);
    if (yours == NULL && result == NULL)
        printf("Empty case good\n");
    else if(yours == NULL || result == NULL)
    {
        printf("==> Erreur <===\n");
        printf("Sortie attendue : %p, la votre : %p\n", result, yours);
        printf("\n");
    }
    else if (yours != result)
    {
        printf("==> Erreur <===\n");
        printf("Sortie attendue : %p, la votre : %p\n", result, yours);
        printf("\n");
    }
}

int main(void)
{
    ft_memchr_test_str("helloo", 'l', 6);
    ft_memchr_test_str("", 'l', 0);
    ft_memchr_test_str("helloo", '\0', 7);
    ft_memchr_test_str("helloo", 'i', 6);
    ft_memchr_test_str("h", 'h', 1);
    ft_memchr_test_str("abc", 'z', 3);
    ft_memchr_test_str("abcabc", 'c', 2);
    char data[] = {1, 2, 3, 4, 5};
    ft_memchr_test_str(data, 3, 5);
}