char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return (s2);
}

/*-------------------------------TEST BELOW-----------------------------------*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main()
{
    char src[13] = "i like bread";
    char dest[13] = "";
    ft_putstr(ft_strcpy(dest, src));

    return (0);
}
