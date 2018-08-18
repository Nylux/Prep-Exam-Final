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

void ft_rot_13(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            char count;
            count = str[i] - 96;

            if (count <= 13)
                str[i] = str[i] + 13;
            else if (count > 13)
                str[i] = str[i] - 13;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char count;
            count = str[i] - 64;

            if (count <= 13)
                str[i] = str[i] + 13;
            else if (count > 13)
                str[i] = str[i] - 13;
        }
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_rot_13(av[1]);
    ft_putchar('\n');
    return (0);
}
