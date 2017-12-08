#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char str1 [11]="lol";
    char str2 [11]="lol";
    // Переменная, в которую будет помещен указатель на дубликат строки
    char *dst;
    char *istr;

    // Дублирование строки
    dst = ft_strdup(str1);
    istr = strdup(str2);

    // Вывод дубликата на консоль
    printf ("Дубликат1: %s\n", dst);
    printf ("Дубликат2: %s\n", istr);

    return (0);
}
