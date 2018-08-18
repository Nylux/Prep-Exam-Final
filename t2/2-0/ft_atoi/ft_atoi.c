int ft_atoi(const char *str)
{
    int nb;
    int neg;
    int res;

    nb = 0;
    neg = 1;
    res = 0;

    while(str[nb] == '\t' || str[nb] == '\f' || str[nb] == '\v' || str[nb] == '\n' || str[nb] == '\r' || str[nb] == ' ')
        nb++;
    if (str[nb] == '-')
        neg = -neg;
    if (str[nb] == '-' || str[nb] == '+')
        nb++;
    while (str[nb] && (str[nb] >= '0' && str[nb] <= '9'))
    {
        res = res * 10;
        res = res + str[nb] - '0';
        nb++;
    }
    return (res * neg);
}


/*---------------------------------TEST BELOW---------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("Mon atoi : %d\n", ft_atoi(av[1]));
        printf("Le vrai atoi : %d\n", atoi(av[1]));
    }
    return(0);
}
