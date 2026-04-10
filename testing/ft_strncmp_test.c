#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_strncmp_test(const char *s1, const char *s2, size_t n)
{
    int yours;
    int result;

    yours = ft_strncmp(s1,s2,n);
    result = strncmp(s1,s2,n);
    if (yours != result)
    {
        printf("==> Erreur <===\n");
        printf("Sortie attendue : %d, la votre : %d\n", result, yours);
        printf("\n");
    }
}

int main(void)
{
    ft_strncmp_test("aa","ab", 2);
    ft_strncmp_test("","", 3);
    ft_strncmp_test("aa","ab", 0);
    ft_strncmp_test("bc","ab", 2);
    ft_strncmp_test("abcdef","abcdef", 1);
    ft_strncmp_test("abcdef","abcdef", 10);
    ft_strncmp_test("abcdef","abcdef", 5);
    ft_strncmp_test("abcdef","axcdef", 6);
    ft_strncmp_test("axcdef","abcdef", 6);
    ft_strncmp_test("xabc","vabc", 4);
    ft_strncmp_test("abc", "abc\0zzz", 6);
    ft_strncmp_test("\200", "\0", 1);
    ft_strncmp_test("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa","aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 55);
}