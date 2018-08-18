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

int ft_has_word(char *str)
{
    int i;
    int has_word;

    i = 0;
    has_word = 0;
    while (str[i])
    {
        if (str[i] > 32 && str[i] < 127)
        {
                has_word = 1;
                return (has_word);
        }
        i++;
    }
    return (has_word);
}

void ft_first_word(char *str)
{
    if (str[0] == '\0')
        return ;
    if (ft_has_word(str) == 0)
        return ;

    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] > 32 && str[i] < 127)
        {
            while (str[i] > 32 && str[i] < 127)
            {
                ft_putchar(str[i]);
                i++;
            }
            return ;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_first_word(av[1]);
    ft_putchar('\n');
    return (0);
}
