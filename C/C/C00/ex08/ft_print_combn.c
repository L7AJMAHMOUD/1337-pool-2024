#include <unistd.h>
void ft_putchar(char c) 
{
    write(1, &c, 1);
}
void print_combination(int *arr, int n) 
{
	int i = 0;
    while(i < n) 
	{
        ft_putchar(arr[i] + '0');
		i++;
    }

    if (arr[0] < 10 - n) 
	{
        ft_putchar(',');
        ft_putchar(' ');
    }
}
void generate_combinations(int *arr, int n, int current, int start) 
{
    if (current == n) 
	{
        print_combination(arr, n);
        return;
    }
    while(start <= 9) 
	{
        arr[current] = start;
        generate_combinations(arr, n, current + 1,start + 1);
		start++;
    }
}
void ft_print_combn(int n) 
{
    if (n > 0 && n < 10) 
	{
        int arr[n];
        generate_combinations(arr, n, 0, 0);
    }
}