#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr %10);
	}
	else
		ft_putchar(nbr + '0');
}

void ft_countdown()
{
	int i;

	i = 9;
	while (i > -1)
	{
		ft_putnbr(i);
		i--;
	}
	ft_putchar('\n');
}

int main()
{
	ft_countdown();
	return (0);
}
