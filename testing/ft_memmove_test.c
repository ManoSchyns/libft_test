#include "libft.h"
#include <stdio.h>
#include <string.h>

static void print_bytes(char *str, int len)
{
    int i = 0;

    while (i < len)
    {
        printf("%d ", (unsigned char)str[i]);
        i ++;
    }
}

static void test_memmove(const void *src, size_t n)
{
    void *dest = malloc(10000);
    void *dest2 = malloc(10000);
    if (dest == NULL || dest2 == NULL)
    {
        free(dest);
        free(dest2);
        return ;
    }
    ft_memmove(dest, src, n);
    memmove(dest2, src, n);
    if (memcmp(dest, dest2, n) != 0)
    {
        printf("==> Erreur <===\n");
        printf("Excepected : ");
        print_bytes(dest2, n);
        printf("   Yours : ");
        print_bytes(dest, n);
        printf("\n\n");
    }    
    free(dest);
    free(dest2);
}

static void test_same_buffer_memmove(void)
{
    //chevauchement a droite
    char buf1[] = "abcdef";
    char buf2[] = "abcdef";

    ft_memmove(buf1 + 2, buf1, 4);
    memmove(buf2 + 2, buf2, 4);
    if (memcmp(buf1, buf2, 6) != 0)
    {
        printf("==> Erreur <===\n");
        printf("Excepected : ");
        print_bytes(buf2, 6);
        printf("   Yours : ");
        print_bytes(buf1, 6);
        printf("\n\n");
    }
    //a gauche 
    char buf3[] = "abcdef";
    char buf4[] = "abcdef";

    ft_memmove(buf3, buf3 + 2, 4);
    memmove(buf4, buf4 + 2, 4);

    if (memcmp(buf3, buf4, 6) != 0)
    {
        printf("==> Erreur <===\n");
        printf("Excepected : ");
        print_bytes(buf4, 6);
        printf("   Yours : ");
        print_bytes(buf3, 6);
        printf("\n\n");
    }
}

int main(void)
{
    char *src = "";
    size_t n = 0;
    test_memmove((void *)src, n);
    char *src0 = "heyy";
     n = 4 ;
    test_memmove((void *)src0, n);
    int src2[] = {7,9,1,9};
    n = 4 * sizeof(int);
    test_memmove((void *)src2, n);
     char *src3 = "zkfnfl";
     n = 7;
    test_memmove((void *)src3, n);
     char *src4 = "dzlndzdzijopa";
     n = 3;
    test_memmove((void *)src4, n);
     char *src5 = "1";
    n = 1;
    test_memmove((void *)src5, n);
     int src6[] = {1,2,4,5,6};
    n = 2 * sizeof(int);
    test_memmove((void *)src6, n);
    test_memmove(NULL, 0);
    test_same_buffer_memmove();
}