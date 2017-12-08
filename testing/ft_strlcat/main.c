#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char dst1[0xF00] = "there is no stars in the sky";
    //char *src = "the cake is a lie !\\0I'm hidden lol\\r\\n";

    char dst2[0xF00] = "there is no stars in the sky";
    char *src = "the cake is a lie !\0I'm hidden lol\r\n";

    size_t dstsize = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");



    printf ("mine : %lu\n", ft_strlcat(dst1, src, dstsize));
    printf ("no_my: %lu\n", strlcat(dst2, src, dstsize));

    printf ("mine : %s\nno_my: %s\n", dst1, dst2);
    return (0);
}
