#include "libft.h"
#include <stdio.h>
#include <string.h>

static void ft_strdup_test(char *strs[])
{
    int i = 0;
    char *result;

    while (strs[i] != NULL)
    {
        result = ft_strdup(strs[i]);
        if (strcmp(result,strs[i]) != 0)
        {
            printf("==> Erreur <===\n");
            printf("Sortie attendue : %s, la votre : %s\n", strs[i], result );
            printf("\n");
        }
        free(result);
        i ++;
    }
}

int main(void)
{
    char *strs[] = {"heyy" , "" , "Hollalaalallaaallala" ,"i" ,"  .\t.yess" ,NULL};
    ft_strdup_test(strs);
}