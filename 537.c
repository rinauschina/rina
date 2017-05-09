#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *str;
    int len, temp;
    int i;
    
    str = malloc(sizeof(*str)*64);
    printf("Исходная строка: ");
    fgets(str, 64, stdin);
    printf("Вы ввели: %s", str);
    getchar();
    
    len = strlen(str);
    printf("Количество элементов в строке: %d\n", (len-1)/2);
   
    //Произведем перестановки правой и левой частей заданной строки
    //Для четного количества эдементов в строке
    if (len%2 == 0)
    {
        for (i = 0; i < len/2-1; i++)
        {
            temp = str[i];
            str[i] = str[len/2+i];
            str[len/2+i] = temp;
        }
        printf("Новая строка: %s", str);
    }
    //Для нечетного количества элементов в строке
    else
    {
        for (i = 0; i < len/2; i++)
        {
            temp = str[i];
            str[i] = str[len/2+i];
            str[len/2+i] = temp;
        }
        printf("Новая строка: %s", str); 
    }


    free(str);//освобождение памяти

    
    return 0;
    }
