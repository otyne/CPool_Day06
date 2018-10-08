/*
** EPITECH PROJECT, 2018
** my get nbr base 
** File description:
** get nbr base
*/

#include "my.h"
#include <limits.h>

static int get_sign(char const **str)
{
    int mul = 1;

    while (*str[0] == '-' || *str[0] == '+') {
        if (*str[0] == '-')
            mul *= -1;
        *str += 1;
    }
    return (mul);
}

static int is_limit(int mul, int ret, int unit, int bl)
{
    if (mul == 1 && INT_MAX / bl <= ret) {
	if (INT_MAX / bl < ret)
            return (0);
        else if (INT_MAX / bl == ret && INT_MAX % bl < unit)
	    return (0);
        else
            return (1);
    }
    else if (mul == -1 && INT_MIN / -bl <= ret) {
        if (INT_MIN / -bl < ret)
            return (0);
        else if (INT_MIN / -bl == ret && INT_MIN % bl * -1 < unit)
            return (0);
	else
            return (1);
    }
    else
        return (1);
}

int my_getnbr_base(char const *str, char const *base)
{
    int mul = get_sign(&str);
    int bl = 0;
    int ret = 0;
    int i = 0;

    while (base[bl] != '\0')
        bl += 1;
    while (str[i] >= '0'  && str[i] <= '9') {
        if (is_limit(mul, ret, str[i] - '0', bl) == 0)
	    return (0);
        else
            ret = ret * bl + str[i] - '0';
        i += 1;
    }
    return (ret * mul);
}
