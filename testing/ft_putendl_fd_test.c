#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

//Pour ce test. Regardez bien le fichier output.txt après l'avoir lancé
int main(void)
{
    int fd = open("testing/output.txt", O_WRONLY | O_TRUNC);
    if (fd < 0)
    {
        printf("Cannot open the file\n");
        return (1);
    }
    ft_putendl_fd("heyey", fd);
    ft_putendl_fd("", fd);
    ft_putendl_fd("petit retour a la ligne", fd);
    ft_putendl_fd("Si j'en met un en plus ici : \n", fd);
    ft_putendl_fd(": ca en fait bien deux heheh", fd);
    ft_putendl_fd(NULL, fd);
    ft_putendl_fd("\n", -1);
    //regardez le terminal
    ft_putendl_fd("finn", 1);
    close(fd);
}