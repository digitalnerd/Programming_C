#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "print_up.h"

// print_up() просматривает в цикле всю строку, посимвольно преобразовывая ее к верхнему регистру.
// Вывод также производится посимвольно.
// toupper() возвращает переданный ей символ в верхнем регистре.

void print_up(const char * str) {

    int i;
    for(i = 0; i < strlen(str); i++) printf("%c", toupper(str[i]));
    printf("\n");
}
