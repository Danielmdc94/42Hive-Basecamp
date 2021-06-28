#include <unistd.h>

int        ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_putnbr(int nb),

int        main(void)
{
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(1);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(6546548);
    ft_putchar('\n');
    ft_putnbr(500);
    ft_putchar('\n');
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
    return (0);
}
