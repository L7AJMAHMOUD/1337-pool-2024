
int		ft_ctoi(char c)				
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}

int		ft_pow(int nb, int power)
{
	int	result;

	result = 1;
	if(power < 0)
		return (0);
	if(power == 0)
		return (1);
	while (power--)
		result *= nb;
	return (result);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		num;
	int		negative;
	int		i;
	int		pow;

	negative = 1;
	i = 0;
	if ((str_base >= 2))
	{
		if (*str == '-')
		{
			i++;
			negative = -1;
		}
		while (str[i])
			i++;
		pow = 0;
		num = 0;
		while (--i >= 0)
		{
			if ((ft_ctoi(str[i]) != -1) && (ft_ctoi(str[i]) < str_base))
				num += ft_ctoi(str[i]) * ft_pow(str_base, pow++);
		}
		return (num * negative);
	}
	return (0);
}