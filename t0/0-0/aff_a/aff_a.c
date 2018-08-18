#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_aff_a(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'a')
        {
            ft_putchar(str[i]);
            return ;
        }
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
        ft_aff_a(av[1]);
    else
        ft_putchar('a');
    ft_putchar('\n');
    return 0;
}
