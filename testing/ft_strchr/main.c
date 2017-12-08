#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char str1[11] = "0123456789";
    char str2[11] = "0123456789";
    // Код искомого символа
    int ch = '\0';
    // Указатель на искомую переменную в строке,
    // по которой осуществляется поиск.
    char *ach;

    printf ("main: %s\n", ft_strchr(str1,ch));
    printf ("nomy: %s\n", strchr(str2,ch));
     //Ищем символ ‘6’
    ach = strchr (str2,ch);

     //Выводим результат на консоль
    if (ach==NULL)
        printf ("Символ в строке не найден\n");
    else
    printf ("Искомый символ в строке на позиции # %ld\n",ach - str2+1);

    return (0);
}
