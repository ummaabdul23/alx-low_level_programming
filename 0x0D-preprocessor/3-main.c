#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
  * main - entry point
  *
  * Return: Always 0
  */

int main(void)
{
    int x;
    int y;

    x = ABS(-98) * 10;
    y = ABS(98) * 10;
    printf("%d, %d\n", x, y);
    return (0);
}
