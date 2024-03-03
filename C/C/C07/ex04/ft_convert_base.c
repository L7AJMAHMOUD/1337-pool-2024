#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
int check_base(char *base)
{
    int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
	return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
        {
		    return (0);
        }
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while ((base[i] != base[j]) && base[j])
        {
			j++;
        }
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (1);
}
int power(int nb, int power)
{
    int a;

    a = 1;
    while (power > 0)
    {
        a = a * nb;
        power--;
    }
    return (a);
}
int charToDigit(char c, char *base) 
{
    int digit = 0;
    while (*base && *base != c) 
    {
        digit++;
        base++;
    }
    return digit;
}
int ft_atoi_base(char *str, char *base)
{
    int i;
    int r;
    int m;

    i = 0;
    r = 0;
    m = 1;
    
    if (!check_base(base))
    {
        return(0);
    }
    while(str[i] == ' ')
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-' )
        {
            m = m * (-1);
        }
            i++;
    }
    int d = 0;
    while(base[d])
    {
        d++;
    }
    int x = 0;
    while(str[x])
    {
        x++;
    }
    while (i < x) 
    {
        r += charToDigit(str[i], base) * power(d, x - 1 - i);
        i++;
    }
    return r * m;
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to) 
{
    if (!check_base(base_from) || !check_base(base_to)) 
    {
        return NULL;
    }
    int value = ft_atoi_base(nbr, base_from);
    if (value == 0) 
    {
        char *result = (char *)malloc(sizeof(char) * 2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    int negative = value < 0 ? -1 : 1;
    int abs_value = value * negative;
    int len = 0;
    while (abs_value > 0) 
    {
        len++;
        abs_value /= ft_strlen(base_to);
    }
    len = len + (negative == -1 ? 1 : 0);
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    result[len] = '\0';
    int i = len - 1;
    abs_value = value * negative; // Restore original sign for conversion
    while (abs_value > 0) 
    {
        result[i--] = base_to[abs_value % ft_strlen(base_to)];
        abs_value /= ft_strlen(base_to);
    }
    if (negative == -1) 
    {
        result[i] = '-';
    }
    return result;
}