#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_rev_print(char *str)
{
    if (str[0] == '\0')
        return ;
    int i;

    i = ft_strlen(str) - 1;
    while (str[i])
    {
        ft_putchar(str[i]);
        i--;
    }

}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_rev_print(av[1]);
    ft_putchar('\n');
    return (0);
}
