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

void ft_rotone(char *str)
{
    if (str[0] == '\0')
        return ;
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] == 'z')
                    str[i] = str[i] - 25;
            else
                str[i] = str[i] + 1;
        }
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_rotone(av[1]);
    ft_putchar('\n');
    return (0);
}
