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

static void test_memcpy(const void *src, size_t n)
{
    void *dest = malloc(10000);
    void *dest2 = malloc(10000);
    if (dest == NULL || dest2 == NULL)
    {
        free(dest);
        free(dest2);
        return ;
    }
    ft_memcpy(dest, src, n);
    memcpy(dest2, src, n);
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

int main(void)
{
    char *src = "";
    size_t n = 0;
    test_memcpy((void *)src, n);
    char *src0 = "heyy";
     n = 4 ;
    test_memcpy((void *)src0, n);
    int src2[] = {7,9,1,9};
    n = 4 * sizeof(int);
    test_memcpy((void *)src2, n);
     char *src3 = "zkfnfl";
     n = 7;
    test_memcpy((void *)src3, n);
     char *src4 = "dzlndzdzijopa";
     n = 3;
    test_memcpy((void *)src4, n);
     char *src5 = "1";
    n = 1;
    test_memcpy((void *)src5, n);
     int src6[] = {1,2,4,5,6};
    n = 2 * sizeof(int);
    test_memcpy((void *)src6, n);
    test_memcpy(NULL, 0);
}