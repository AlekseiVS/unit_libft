#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char s1[100] = "masha+";
    char s2[100] = "valera";

    printf("res: %s\n", ft_strjoin(s1, s2));
    return (0);
}
