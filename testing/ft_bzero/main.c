#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "../../libft.h"

int main()
{
    char str1[] = "123456789";
    char str2[] = "123456789";
    size_t length = 2;


    ft_bzero(str1, length);
    size_t i = 0;
    while (i < sizeof(str1) / sizeof(str1[0]))
    {
        write(1, &str1[i], 1);
        i++;
    }
    write(1, "\n", 1);


    bzero (str2, length);
    i = 0;
    while (i < sizeof(str1) / sizeof(str1[0]))
    {
        write(1, &str2[i], 1);
        i++;
    }
    write(1, "\n", 1);


    return (0);
}