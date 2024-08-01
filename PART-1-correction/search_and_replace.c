// #include <unistd.h>
// #include <stdlib.h>
// int main(int ac,char **av)
// {
//     int i = 0;
//     if(ac == 4)
//     {
//     while(av[1][i])
//     {
//         if(av[1][i] == av[2][0])
//         {
//             write(1,&av[3][0],1);
//         }
//         else
//         {
//             write(1,&av[1][i],1);
//         }
//         i++;
//     }
//     }
//     write(1,"\n",1);
//     exit(1);
// }
#include <unistd.h>

void	ft_search_and_replace(char **str)
{
	int		i;

	i = 0;
	if (str[0] && !str[1][1] && !str[2][1])
											
	{
		while (str[0][i])
		{
			if (str[0][i] == str[1][0])
				write(1, &str[2][0], 1);
			else
				write(1, &str[0][i], 1);
			i++;
		}
	}
	
}

int		main(int argc, char *argv[])
{
	if (argc == 4)
		ft_search_and_replace(&argv[1]);		
	write(1, "\n", 1);
	return (0);								
}
