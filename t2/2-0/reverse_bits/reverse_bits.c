#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    int value;
    int res;

    res = 0;       // VALEUR APRES INVERSEMENT
    value = octet; // VALEUR DECIMALE DU CHAR

    printf("VALUE %d\n", value);

    if (value / 128 == 0)
        res = res + 128;
    else
        value = value - 128;

    if (value / 64 == 0)
        res = res + 64;
    else
        value = value - 64;

    if (value / 32 == 0)
        res = res + 32;
    else
        value = value - 32;

    if (value / 16 == 0)
        res = res + 16;
    else
        value = value - 16;

    if (value / 8 == 0)
        res = res + 8;
    else
        value = value - 8;

    if (value / 4 == 0)
        res = res + 4;
    else
        value = value - 4;

    if (value / 2 == 0)
        res = res + 2;
    else
        value = value - 2;

    if (value / 1 == 0)
        res = res + 1;
    else
        value = value - 1;



    octet = res;
    printf("RES %d\n", res);
    return (octet);

}

/*---------------------------------TEST BELOW---------------------------------*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{

    if (ac == 2)
        printf("%c\n", reverse_bits(av[1][0]));
    return (0);
}
