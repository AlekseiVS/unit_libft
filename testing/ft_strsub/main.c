#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char s[1000] = "bxbwcxbds";
    unsigned int start = 3;
    size_t len = 3;

    ft_strsub(s, start, len);
    printf("res: %s\n", ft_strsub(s, start, len));
    return (0);
}
