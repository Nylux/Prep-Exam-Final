#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
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

void ft_aff_first_param(char *str)
{
    ft_putstr(str);
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        ft_aff_first_param(av[1]);
        ft_putchar('\n');
    }
    else
        ft_putchar('\n');
    return (0);
}
