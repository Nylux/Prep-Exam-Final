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

void ft_print_numbers(void)
{
    ft_putstr("0123456789");
}

/*---------------------------TESTING BELOW THIS LINE--------------------------*/

int main()
{
    ft_print_numbers();
    return (0);
}
