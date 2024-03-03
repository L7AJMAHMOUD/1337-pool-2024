#include <unistd.h>

int main(int ac, char **av) 
{
    int i = 0;

    if (ac == 2) 
    {
        while (av[1][i]) 
        {
            i++;
        }
        while (av[1][i - 1] == ' ' || av[1][i - 1] == '\t') 
        {
            i--;
        }
        while (av[1][i - 1] != ' ' && av[1][i - 1] != '\t') 
        {
            i--;
        }
        while (av[1][i]) 
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
#include <unistd.h>

void	fn_word(char *str, int *i)
{
	while (str[*i] != ' ' && str[*i] != '\t' && str[*i])
		(*i) += 1;
}

void	print_word(char *str, int start, int end)
{
	int		i;

	i = start;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && end--)
		write(1, &str[i++], 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		start;
	int		end;

	if (argc == 2)
	{
		i = 0;
		start = 0;
		end = 0;
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i])
			i++;
		while (argv[1][i])
		{
			start = i;
			fn_word(argv[1], &i);
			end = i;
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			if (!argv[1][i])
				print_word(argv[1], start, end);
		}
	}
	write(1, "\n", 1);
	return (0);
}
