#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

static void ft_strnstr_test(const char *s, const char *find, size_t len)
{
    char* yours;
    char *result;

    yours = ft_strnstr(s,find,len);
    result =  strnstr(s,find,len);
    if (yours == NULL && result == NULL)
        printf("Empty case good\n");
    else if(yours == NULL || result == NULL)
    {
        printf("==> Erreur <===\n");
        printf("Sortie attendue : %s, la votre : %s\n", result, yours);
        printf("\n");
    }
    else if (yours != result)
    {
        printf("==> Erreur <===\n");
        printf("Sortie attendue : %s, la votre : %s\n", result, yours);
        printf("\n");
    }
}

int main(void)
{
    ft_strnstr_test("helloo", "el", 6);
    ft_strnstr_test("", "l", 0);
    ft_strnstr_test("helloo", "", 7);
    ft_strnstr_test("helloo", "hey", 6);
    ft_strnstr_test("h", "h", 1);
    ft_strnstr_test("abc", "ab", 3);
    ft_strnstr_test("abcabc", "a", 2);
    ft_strnstr_test("abcde", "cd", 3);
    ft_strnstr_test("abcde", "cd", 4);
    ft_strnstr_test("abcde", "cd", 4);
    ft_strnstr_test("abcde", "cd", 4);
    ft_strnstr_test("abcde", "de", 5);
}