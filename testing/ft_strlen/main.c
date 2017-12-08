#include <stdio.h>
#include <string.h>
#include "../../libft.h"

int main()
{
    char str1[11]="0123456";
    char str2[11]="0123456789";

    //Определение длины строки и вывод результата на консоль
    printf ("Длина строки «%s» - %lu символов\n", str1, ft_strlen(str1));
    printf ("Длина строки «%s» - %lu символов\n", str2, strlen(str2));


    return (0);
}
