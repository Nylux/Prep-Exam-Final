#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *str)
{
    int length;
    char *copy;
    int i;

    length = ft_strlen(str);
    copy = (char*)malloc(sizeof(char) * length);
    i = 0;

    while (str[i])
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = str[i];
    return (copy);
}


/*--------------------------------TEST BELOW----------------------------------*/

#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
            printf("%s\n", ft_strdup(av[1]));
    return (0);
}
