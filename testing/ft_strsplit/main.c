#include <stdio.h>
#include "../../libft/libft.h"

int main() {


    char c = '*';
    char const *s = "hello*word***a*a*a*a*****bb";

	int i;
    char **str;

	i = 0;
    str = ft_strsplit(s, c);

    while (str[i])
    {
        printf("str[%d]: |%s|\n", i, str[i]);
        i++;
    }
    return (0);
}
