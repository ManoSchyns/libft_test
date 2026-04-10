#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_striteri_test(char *str, void (*f)(unsigned
int, char *), char const *excpected)
{
    ft_striteri(str, f);
    if (str == NULL && excpected == NULL)
    {
        printf("Null case good \n");
        return ;
    }
    if (str == NULL || excpected == NULL)
        printf("Null Case Not good\n");
    else if (strcmp(str, excpected) != 0)
    {
        printf("===> Erreur <===\n");
        printf("Output attendu : %s, ton output : %s\n", excpected, str);
        printf("\n");
    }
}

static void apply_fonction(unsigned int position, char *s)
{
    if (*s >= 'a' && *s <= 'z')
        *s = *s - 32;
    else if (*s >= 'A' && *s <= 'Z')
        *s = *s + 32;
}

int main(void)  
{
    char str1[] = "abcd";
    ft_striteri_test(str1, apply_fonction, "ABCD"); 
    char str2[] = "";
    ft_striteri_test(str2, apply_fonction, "");
    char str3[] = "12345";
    ft_striteri_test(str3, apply_fonction, "12345"); 
    char str4[] = "!@#A$";
    ft_striteri_test(str4, apply_fonction, "!@#a$"); 
    char str5[] = "Hello World!";
    ft_striteri_test(str5, apply_fonction, "hELLO wORLD!"); 
    ft_striteri_test(NULL, apply_fonction, NULL);
}