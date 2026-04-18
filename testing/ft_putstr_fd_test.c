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
    ft_putstr_fd("heyey\n", fd);
    ft_putstr_fd("", fd);
    ft_putstr_fd("okk c'est coolllllllll\n", fd);
    ft_putstr_fd("\n", fd);
    ft_putstr_fd("ici mtnt", fd);
    ft_putstr_fd(NULL, fd);
    ft_putstr_fd("\n", -1);
    //regardez le terminal
    ft_putstr_fd("finn", 1);
    close(fd);
}