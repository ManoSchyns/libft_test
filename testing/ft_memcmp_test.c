#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_memcmp_test(const void *s1, const void *s2, size_t n)
{
    int yours;
    int result;

    yours = ft_memcmp(s1,s2,n);
    result = memcmp(s1,s2,n);
    if (yours != result)
    {
        printf("==> Erreur <===\n");
        printf("Sortie attendue : %d, la votre : %d\n", result, yours);
        printf("\n");
    }
}

int main(void)
{
    ft_memcmp_test("aa","ab", 2);
    ft_memcmp_test("","", 3);
    ft_memcmp_test("aa","ab", 0);
    ft_memcmp_test("bc","ab", 2);
    ft_memcmp_test("abcdef","abcdef", 1);
    ft_memcmp_test("abcdef","abcdef", 10);
    ft_memcmp_test("abcdef","abcdef", 5);
    ft_memcmp_test("abcdef","axcdef", 6);
    ft_memcmp_test("axcdef","abcdef", 6);
    ft_memcmp_test("xabc","vabc", 4);
    ft_memcmp_test("abc", "abc\0zzz", 6);
    ft_memcmp_test("\200", "\0", 1);
    ft_memcmp_test("abc", "abd", 2);
    ft_memcmp_test("abc", "abd", 3);
    ft_memcmp_test("a", "a", 100);
    ft_memcmp_test("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa","aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", 55);
    char a[] = {1, 2, 3};
    char b[] = {1, 2, 4};
    ft_memcmp_test(a, b, 3);
}