#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int    main(void)
{
    char str1[] = "123";
    char str2[] = "abcdefghi";

    printf("str1 originally: %s\n", str1);
    printf("str2 originally: %s\n", str2);
    strncpy(str1, str2, 6);
    printf("str1 after strncpy: %s\n", str1);
    printf("str2 after strncpy: %s\n", str2);
    ft_putchar('\n');

    char str3[] = "123";
    char str4[] = "abcdefghi";

    printf("str3 originally: %s\n", str3);
    printf("str4 originally: %s\n", str4);
    ft_strncpy(str3, str4, 6);
    printf("str3 after ft_strncpy: %s\n", str3);
    printf("str4 after ft_strncpy: %s\n", str4);
}