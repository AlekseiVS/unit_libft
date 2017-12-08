#include <stdio.h>
#include "../../libft.h"

int main()
{

    int i1 = 64;
    int i2 = 64;

    printf ("main: %d\n", ft_isalpha(i1));
    printf ("nomy: %d\n", isalpha(i2));

    return (0);
}