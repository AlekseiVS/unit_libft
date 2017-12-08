#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char dst1[1024]="";
    const char src1[1024]="первая строка";

    char dst2[1024]="";
    const char src2[1024]="первая строка";

    size_t n = 10;

    // Копируем строку из массива src в массив dst. Обратите внимание,
    //что скопируется только строка «первая строка\0».

    ft_strncpy(dst1, src1, n);
    strncpy(dst2, src2, n);

    //Вывод массива src на консоль
    printf ("src1: %s\n",src1);

    // Вывод массива dst на консоль
    printf ("dst1: %s\n",dst1);;


    //Вывод массива src на консоль
    printf ("src2: %s\n",src2);

    // Вывод массива dst на консоль
    printf ("dst2: %s\n",dst2);


    return (0);
}