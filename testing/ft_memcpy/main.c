#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    unsigned char dst1[10]="123456789";
    unsigned char src1[10]="1234567";

    unsigned char dst2[10]="123456789";
    unsigned char src2[10]="1234567";

    size_t n = 3;



    ft_memcpy(dst1, src1, n);
    printf ("dst1: %s\n", dst1);


    memcpy (dst2, src2, n);
    printf ("dst2: %s\n", dst2);

    return 0;
}
