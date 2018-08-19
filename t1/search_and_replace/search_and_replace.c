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

void ft_search_and_replace(char *str, char *a1, char *a2)
{
    if (str[0] == '\0' || a1[0] == '\0' || a2[0] == '\0')
        return ;

    if (a1[1] != '\0' || a2[1] != '\0')
        return ;

    char l1;
    char l2;
    int i;

    l1 = a1[0];
    l2 = a2[0];
    i = 0;

    while (str[i])
    {
        if (str[i] == l1)
            str[i] = l2;
        ft_putchar(str[i]);
        i++;
    }



}

int main(int ac, char **av)
{
    if (ac == 4)
        ft_search_and_replace(av[1], av[2], av[3]);
    ft_putchar('\n');
    return (0);
}
