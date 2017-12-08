#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{

/*  unsigned char dst1[10]="";
    unsigned char src1[10]="234A567";

    unsigned char dst2[10]="";
    unsigned char src2[10]="234A567";
    */
    int c = 'm';
    size_t n = 0;

    char buff1[22];
    char buff2[22];
    char *src = "test basic du memccpy !";




    ft_memccpy(buff1, src, c, n);
    printf ("dst1: %s\n", buff1);
    //printf ("dst1: %s\n", ft_memccpy(dst1, src1, c, n));


    memccpy (buff2, src, c, n);
    printf ("dst2: %s\n", buff2);
    //printf ("dst2: %s\n", ft_memccpy(dst2, src2, c, n));

    return (0);
}
