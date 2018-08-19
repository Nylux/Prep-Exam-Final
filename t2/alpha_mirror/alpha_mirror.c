#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_alpha_mirror(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            char c;

            c = 'z' - str[i];
            str[i] = c + 'a';

        }

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char c;

            c = 'Z' - str[i];
            str[i] = c + 'A';

        }


        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_alpha_mirror(av[1]);
    ft_putchar('\n');
    return (0);
}
