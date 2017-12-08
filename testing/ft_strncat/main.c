#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char dst1[10]="000";
    char dst2[10]="000";
    char app1[10]="12345";
    printf ("app:  %s\n",app1);

    printf ("src1: %s\n", ft_strncat(dst1, app1,3));
    printf ("src2: %s\n", ft_strncat(dst2, app1,7));



    char src1[10]="000";
    char src2[10]="000";
    char app2[10]="12345";
    printf ("app:  %s\n",app2);

    printf ("src1: %s\n", strncat(src1, app2,3));
    printf ("src2: %s\n", strncat(src2, app2,7));

    return (0);
}