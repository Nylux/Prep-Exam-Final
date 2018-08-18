#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_repeat_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			char count;

			count = str[i] - 96;
			while (count > 0)
			{
				ft_putchar(str[i]);
				count--;
			}

		}

		if (str[i] >= 65 && str[i] <= 90)
		{
			char count;

			count = str[i] - 64;
			while (count > 0)
			{
				ft_putchar(str[i]);
				count--;
			}

		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		ft_repeat_alpha(av[1]);
	ft_putchar('\n');

	return (0);
}
