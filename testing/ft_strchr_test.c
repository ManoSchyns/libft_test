#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_strchr_test(char *s[], char *c)
{
    int i = 0;
    char *result;
    char *yours;

    while (s[i] != NULL)
    {
        result = strchr(s[i], c[i]);
        yours = ft_strchr(s[i], c[i]);
        if (result == NULL && yours == NULL)
            printf("good for NULL case\n");
        else if(result == NULL || yours == NULL)
        {
            printf("==> Erreur <===\n");
            printf("Pour le mot : %s et le caractere a chercher : %c\n ===> Sortie attendue : %s, la votre : %s\n", s[i], c[i],result, yours);
            printf("\n");
        }
        else if (strcmp(result, yours) != 0)
        {
            printf("==> Erreur <===\n");
            printf("Pour le mot : %s et le caractere a chercher : %c\n ===> Sortie attendue : %s, la votre : %s\n", s[i], c[i],result, yours);
            printf("\n");
        }
        i ++;
    }
}

int main(void)
{
    char *s[] = {"hola", "alalelalo", "", "Noyus y est","ook" , "i",NULL};
    char *c = "haiyk   ";
    ft_strchr_test(s,c);
}