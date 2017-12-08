#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char dst1[1024]="";
    char src1[1024]="первая строка\0вторая строка";

    char dst2[1024]="";
    char src2[1024]="первая строка\0вторая строка";



    // Копируем строку из массива src в массив dst. Обратите внимание,
    //что скопируется только строка «первая строка\0».

    ft_strcpy(dst1, src1);
    strcpy(dst2, src2);

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