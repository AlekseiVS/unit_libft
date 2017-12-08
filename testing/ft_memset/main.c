#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    unsigned char src1[]="123456789";
    unsigned char src2[]="123456789";

    int c = '*';

    size_t n = 3;

    ft_memset(src1, c, n);
    printf ("src1: %s\n",src1);


    memset (src2, c, n);
    printf ("src2: %s\n",src2);

    return 0;
}
