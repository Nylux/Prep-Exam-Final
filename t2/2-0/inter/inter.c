#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_inter(char *str1, char *str2)
{
    if (str1[0] == '\0' || str2[0] == '\0')
        return ;

    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[j])
    {
        while (str2[i])
        {
            if (str2[i] == str1[j])
            {
                ft_putchar(str1[j]);
                break ;
            }
            i++;
        }
        i = 0;
        j++;
    }
}

int main(int ac, char **av)
{
    if (ac == 3)
        ft_inter(av[1], av[2]);
    ft_putchar('\n');
    return (0);
}
