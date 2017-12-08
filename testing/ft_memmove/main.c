#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{

    unsigned char src1[10]="123456789";

    unsigned char src2[10]="123456789";

    size_t n = 3;



    printf ("src0 old: %s\n", src2);

    ft_memmove(&src1[4], &src1[3], n);
    printf ("src1 new: %s\n", src1);

    memmove (&src2[4], &src2[3], n);
    printf ("src2 new: %s\n", src2);

    return (0);
}

