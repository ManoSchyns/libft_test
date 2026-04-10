#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_stmapi_test(char const *str, char (*f)(unsigned
int, char), char const *excpected)
{
    char *result;

    result = ft_strmapi(str, f);
    if (result == NULL && excpected == NULL)
    {
        printf("Null case good \n");
    }
    else if (result == NULL || excpected == NULL)
        printf("Null Case Not good\n");
    else if (strcmp(result, excpected) != 0)
    {
        printf("===> Erreur <===\n");
        printf("Output attendu : %s, ton output : %s\n", excpected, result);
        printf("\n");
    }
    free(result);
}

static char apply_fonction(unsigned int position, char caract)
{
    if (caract - position < 32)
        return (' ');
    return (caract - position);
}

int main(void)  
{
    ft_stmapi_test("abcd", apply_fonction, "aaaa"); 
    ft_stmapi_test("", apply_fonction, "");
    ft_stmapi_test("12345", apply_fonction, "11111"); 
    ft_stmapi_test("!@#$", apply_fonction, "!?!!"); 
    ft_stmapi_test("Hello World!", apply_fonction, "Hdjik QhjcZ "); 
    ft_stmapi_test(NULL, apply_fonction, NULL);
}