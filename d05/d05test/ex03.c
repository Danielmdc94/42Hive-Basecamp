#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    *ft_strcpy(char *dest, char *src);

int        main(void)
{
    //check when there is space
    char str1[] = "ComeonPaco";
    char str2[20];

    char *c = ft_strcpy(str2, str1);

    printf("Come on Paco is: %s.\n", c);

    //check when dest is too small: anything might happen
    char str3[] = "Come on Paco";
    char str4[5];

    char *d = ft_strcpy(str4, str3);

    printf("Come on Paco is: %s.\n", d);

    //ft_strcpy(str2, str1);
    return (0);
}