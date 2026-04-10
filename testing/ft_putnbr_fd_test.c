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
    ft_putnbr_fd(99, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(0, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-1, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-99, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-1000, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(87, -1);
    //dans le terminal
    ft_putnbr_fd(10000, 1);
    ft_putnbr_fd(-2147483648, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(2147483647, fd);
    write(fd, "\n", 1);
    close(fd);
}