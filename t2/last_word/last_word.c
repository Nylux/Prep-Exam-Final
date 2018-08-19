#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_last_word(char *str)
{
    int i;
    int chr_found;

    i = ft_strlen(str) -1;
    chr_found = 0;

    while (str[i])
    {
        while ((str[i] > 32 && str[i] < 127) || chr_found == 0)
        {
            i--;
            if (str[i] > 32 && str[i] < 127)
                chr_found = 1;
        }
        i++;
        while (str[i])
        {
            if (str[i] > 32 && str[i] < 127)
                ft_putchar(str[i]);
            i++;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_last_word(av[1]);
    ft_putchar('\n');
    return (0);

}
