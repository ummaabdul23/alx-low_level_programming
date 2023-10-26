#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: the number to be printed
  * Return: void
  */

void print_binary(unsigned long int n) {
    int size = sizeof(n) * 8;
    int i, leadingZero;

    if (n == 0) {
        _putchar('0');
        return;
    }

    leadingZero = 1;

    for (i = size - 1; i >= 0; i--) {
        unsigned long int mask = 1UL << i;
        if ((n & mask) == mask) {
            leadingZero = 0;
            _putchar('1');
        } else if (!leadingZero) {
            _putchar('0');
        }
    }
}
