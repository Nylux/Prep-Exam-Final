int ft_check_empty(int *tab, unsigned int len)
{
    unsigned int i;

    i = 0;
    while (i < len)
    {
        if (tab[i] != 0)
            return (0);
        i++;
    }
    return (1);
}

int max(int *tab, unsigned int len)
{
    unsigned int i;
    int max;

    i = 0;
    max = 0;

    if (ft_check_empty(tab, len) == 1 || len == 0)
        return (0);

    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}


/*------------------------------TEST BELOW------------------------------------*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int tab[5] = {5, 4, 3, 2, 1};
    int tab2[3] = {-1, -8931898, 48668};
    int *tab3 = NULL;

    printf("tab : %d\n", max(tab, 5));
    printf("tab2 : %d\n", max(tab2, 5));
    printf("tab3 : %d\n", max(tab3, 0));

    return (0);
}
