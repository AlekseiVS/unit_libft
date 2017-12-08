#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char dst1[1024]="первая строка";
    char app1[1024]="вторая строка";

    char dst2[1024]="первая строка";
    char app2[1024]="вторая строка";

    // Добавляем строку из массива src в массив dst.
    //strcat (dst2, app2);

    // Вывод массива dst на консоль
    printf ("dst1: %s\n",ft_strcat (dst1, app1));
    printf ("dst2: %s\n",strcat (dst2, app2));

    return (0);
}