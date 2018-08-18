int ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == ' ')
			i++;
		if (str[i] == '-')
			neg = -neg;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10;
			res = res + str[i] + '0';
			i++;
		}
		if (neg == -1)
			return (-res);
		else
			return (res);
	}
}
