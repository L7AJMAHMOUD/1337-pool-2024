#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char alpha;
    alpha = 'z';
    while(alpha >= 97)
    {
        write(1,&alpha,1);
        alpha--;
    }
}