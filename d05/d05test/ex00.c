#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str);

int    main(void)
{
    char str1[] = "Watermelon or the unmodifiable string\n";
    ft_putstr(str1);
    return (0);
}