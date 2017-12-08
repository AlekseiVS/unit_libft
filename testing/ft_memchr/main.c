#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{

    unsigned char src1[35] = "/|\\x12\\xff\\x09\\x42\\2002\\42|\\\\";
    unsigned char src2[35] = "/|\\x12\\xff\\x09\\x42\\2002\\42|\\\\";

    int c = '\200';
    size_t n = 10;

    //ft_memchr (src1, c, n);

    printf ("libft: %s\n", ft_memchr(src1, c, n));

    //unsigned char src2[15]="1234567890";
    printf ("c lib: %s\n", memchr(src2, c, n));

    return (0);
}