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

void ft_repeat_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            char pos;
            pos = str[i] - 96;
            while (pos > 0)
            {
                ft_putchar(str[i]);
                pos--;
            }
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char pos;
            pos = str[i] - 64;
            while (pos > 0)
            {
                ft_putchar(str[i]);
                pos--;
            }
        }
        else
            ft_putchar(str[i]);

        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_repeat_alpha(av[1]);

    ft_putchar('\n');
    return (0);
}
