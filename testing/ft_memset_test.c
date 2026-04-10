#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

static void print_bytes(char *str, int len)
{
    int i = 0;

    while (i < len)
    {
        printf("%d ", (unsigned char)str[i]);
        i ++;
    }
}

static void test_ft_memset_string(void)
{
    char str[10] = "123456789";
    char str2[10] = "123456789";
    ft_memset(str, 't',10);
    memset(str2,'t',10);
    if (memcmp(str, str2, 10) != 0)
    {
        printf("===> Erreur <===\n");
        printf("Your : ");
        print_bytes(str, 10);
        printf("Excpected : ");
        print_bytes(str2, 10);
        printf("\n");
        printf("\n");
    }
}

static void test_ft_memset_int(void)
{
    int tab[5] = {1, 2, 3, 4, 5};
    int tab2[5] = {1, 2, 3, 4, 5};
    int i = 0;
    ft_memset(tab, 3,sizeof(tab));
    memset(tab2, 3,sizeof(tab2));
    while(i < 5)
    {
        if(tab[i] != tab2[i])
        {
            printf("===> Erreur tab int<===\n");
            printf("Your : %d, Expected : %d\n", tab[i], tab2[i]);
            printf("\n");
            break;
        }
        i ++;
    }
    
}

//ne dois pas planter
static void test_empty(void)
{
    ft_memset(NULL, 't',0);
}

static void test_n_inferieur(void)
{
    char part[5] = "ABCDE";
    char part2[5] = "ABCDE";
    ft_memset(part, 'A',3);
    memset(part2,'A',3);
    if (memcmp(part, part2, 5) != 0)
    {
        printf("===> Erreur <===\n");
        printf("Your : ");
        print_bytes(part, 5);
        printf("Excpected : ");
        print_bytes(part2, 5);
        printf("\n");
        printf("\n");
    }

}

int main(void)
{
    test_empty();
    test_ft_memset_int();
    test_ft_memset_string();
    test_n_inferieur();
    return (0);
}