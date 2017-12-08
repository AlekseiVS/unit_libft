#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char *str1 = "the cake is a lie !\0I'm hidden lol\r\n";
    char *str2 = "the cake is a lie !\0I'm hidden lol\r\n";
    // Код искомого символа
    int ch = ' ';
    // Указатель на искомую переменную в строке,
    // по которой осуществляется поиск.
    char *ach;

    printf ("main: %s\n", ft_strrchr(str1,ch));
    printf ("nomy: %s\n", strrchr(str2,ch));
    //Ищем символ ‘6’
    ach = strrchr (str2,ch);

    //Выводим результат на консоль
    if (ach==NULL)
        printf ("Символ в строке не найден\n");
    else
        printf ("Искомый символ в строке на позиции # %ld\n",ach - str2+1);

    return (0);
}