#include <stdio.h>
#include "../../libft/libft.h"

int main()
{
    char s[1000] = "\t\ta\n\n ";

    printf("res: |%s|\n", ft_strtrim(s));
    return (0);
}
