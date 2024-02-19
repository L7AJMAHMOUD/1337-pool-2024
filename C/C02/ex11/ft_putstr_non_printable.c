#include <unistd.h>

void    pchar(char x)
{
    write(1,&x,1);
}
void    ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(32 <= str[i] && str[i] <= 126)
        {
            pchar(str[i]);
        }
        else
        {
            pchar('\\');
            pchar("0123456789abcdef"[str[i] / 16]);
            pchar("0123456789abcdef"[str[i] % 16]);
        }
        i++;
    }
}