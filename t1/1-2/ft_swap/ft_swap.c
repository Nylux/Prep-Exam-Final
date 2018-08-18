void ft_swap(int *a, int *b)
{
    int buffer;

    buffer = *a;
    *a = *b;
    *b = buffer;
}

/*--------------------------------TEST BELOW----------------------------------*/

#include <stdio.h>

int main()
{
    int a;
    int b;

    a = 1;
    b = 5;
    printf("a : %d\nb : %d\n", a, b);
    ft_swap(&a, &b);
    printf("\n- SWAPPED VALUES -\n\n");
    printf("a : %d\nb : %d\n", a, b);
    return(0);
}
