#include <stdio.h>
#include "../../dbessmer/libft.h"

int main()
{

        char *str1 = "\e06050";
        char *str2 = "\e06050";

        printf ("main: %d\n", ft_atoi (str1));
        printf ("nomy: %d\n", atoi (str2));


    return (0);
}