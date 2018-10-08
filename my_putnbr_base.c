/*
** EPITECH PROJECT, 2018
** my put nbr base
** File description:
** put an nbr in a given base
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int base_len = 0;
    int i = 0;
	
    while (base[base_len] != '\0')
        base_len += 1;
    i = nbr % base_len;
    if (nbr != 0) {
        my_putnbr_base(nbr / base_len, base);
        my_putchar(base[i]);
    }
    return (0);
}
