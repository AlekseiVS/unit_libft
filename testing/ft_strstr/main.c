#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char *stra = "see F your F return FF now FF";
    char *strb = "FF";

    char *str1 = "see F your F return FF now FF";
    char *str2 = "FF";

    //char *istr;

    //Поиск строки
    printf("main: %s\n" ,ft_strstr(stra,strb));
    printf("nomy: %s\n" ,strstr(str1,str2));
    //istr = strstr (str1,str2);

    //Вывод результата поиска на консоль
    //if ( istr == NULL)
       // printf ("Строка не найдена\n");
   // else
    //printf ("Искомая строка начинается с символа %ld\n",istr-str1);

    return (0);
}