#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void ft_print_numbers()
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putnbr(i);
		i++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}
