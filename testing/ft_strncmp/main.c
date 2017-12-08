#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char str1[1024]="12345";
    char str2[1024]="12305";

    char str3[1024]="12345";
    char str4[1024]="12305";

    size_t n = 4;

    // Сравниваем две строки
    if (ft_strncmp (str1, str2, n) == 0)
        printf ("Строки идентичны\n");
    else
        printf ("Строки отличаются\n");


    if (strncmp (str3, str4, n) == 0)
        printf ("Строки идентичны\n");
    else
        printf ("Строки отличаются\n");

    return (0);
}