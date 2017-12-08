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

    // Сравниваем две строки
    if (strcmp (str1, str2) == 0)
        printf ("Строки идентичны\n");
    else
        printf ("Строки отличаются\n");


    if (strcmp (str3, str4) == 0)
        printf ("Строки идентичны\n");
    else
        printf ("Строки отличаются\n");

    return (0);
}