#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_foreach(int *tab, int length, int (*f)(int, int))
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (i < length)
	{
		res = f(res, tab[i]);
		i++;
	}
	return (res);
}

int ft_add_prime_sum(int x, int y)
{
	return (x + y);
}

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

int ft_is_prime(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);

}

int *make_prime_tab(int length)
{
	int *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= length)
	{
		if (ft_is_prime(i))
		{
			tab[j] = i;
			j++;
		}
		i++;
	}
	return (tab);
}

int get_prime_length(int length)
{
	int *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= length)
	{
		if (ft_is_prime(i))
		{
			tab[j] = i;
			j++;
		}
		i++;
	}
	return (j);
}

int main(int ac, char **av)
{
	int *tab;
	int tab_length;
	int res;

	res = 0;

	if (ac != 2)
		return (0);
	int x = atoi(av[1]);

	tab = make_prime_tab(x);
	tab_length = get_prime_length(x);

	res = ft_foreach(tab, tab_length, &ft_add_prime_sum);
	ft_putnbr(res);
		return (0);
}
