#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

void ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (k == 1)
			{
				str[i] = str[i] - 32;
				k = 0;
			}
		}
		else if ('0' <= str[i] && str[i] <= '9')
			k = 0;
		else
			k = 1;
		i++;
	}
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac > 1)
    {
        while (i < ac)
        {
            ft_strcapitalize(av[i]);
            if (i < ac - 1)
                ft_putchar('\n');
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}