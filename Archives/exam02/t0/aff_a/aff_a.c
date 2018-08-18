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

void ft_aff_a(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (av[i] == 'a')
		{
			ft_putstr("a\n");
			return ;
		}
		i++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 2)
		ft_putstr("a\n");
	else
		ft_aff_a(av[1]);
	return (0);
}
