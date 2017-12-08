#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    unsigned char dst1[15]="1234567890";
    unsigned char src1[15]="1235567890";

    unsigned char dst2[15]="1234567890";
    unsigned char src2[15]="1235567890";

    size_t n = 7;


    if (ft_memcmp (dst1, src1, n) == 0)
        printf ("Области памяти идентичные.\n");
    else
        printf ("Области памяти отличаются.\n");



    if (memcmp (dst2, src2, n) == 0)
        printf ("Области памяти идентичные.\n");
    else
        printf ("Области памяти отличаются.\n");


    return (0);
}
