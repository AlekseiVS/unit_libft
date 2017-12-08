#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char *stra = "1234567";
    char *strb = "345";

    char *str1 = "1234567";
    char *str2 = "345";

    size_t len = 4;
    //char *istr;

    //Поиск строки
    printf("main: %s\n" ,ft_strnstr(stra,strb, len));
    printf("nomy: %s\n" ,strnstr(str1,str2, len));
    //istr = strstr (str1,str2);

    //Вывод результата поиска на консоль
    //if ( istr == NULL)
    // printf ("Строка не найдена\n");
    // else
    //printf ("Искомая строка начинается с символа %ld\n",istr-str1);

    return (0);
}