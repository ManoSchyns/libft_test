#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

//Pour ce test. Regardez bien le fichier output.txt après l'avoir lancé
int main(void)
{
    int fd = open("libft_test/testing/output.txt", O_WRONLY | O_TRUNC);
    if (fd < 0)
    {
        printf("no \n");
        return (0);
    }
    ft_putchar_fd('B', fd);
    ft_putchar_fd('\n', fd);
    ft_putchar_fd('.', fd);
    ft_putchar_fd('\n', fd);
    close(fd);
}