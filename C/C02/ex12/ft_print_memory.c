#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hex(char *str, int size)
{
    int j = 0;
    while (j < 16) 
    {
        if (j < size - 1)
        {
            ft_putchar("0123456789abcdef"[str[j] / 16]);
            ft_putchar("0123456789abcdef"[str[j] % 16]);
        }
        else
        {
            write(1, "  ", 2);
        }
        if (j % 2 == 1)
        {
            ft_putchar(' ');
        }
        j++;
    }
}

void print_char(char *ptr, int size)
{
    int i = 0;
    while (i < size)
    {
        unsigned long address = (unsigned long)(ptr + i);
        int k = 0;
        while (k < 16) 
        {
            ft_putchar("0123456789abcdef"[(address >> (4 * (15 - k))) & 0xF]);
            k++;
        }
        write(1, ": ", 2);

        int j = 0;
        print_hex(ptr + i, size - i);
        while (j < 16 && i + j < size - 1) 
        {
            if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
            {
                write(1, &ptr[i + j], 1);
            }
            else
            {
                write(1, ".", 1);
            }
            j++;
        }
        i += 16;
        write(1, "\n", 1);
    }
}
void *ft_print_memory(void *addr, unsigned int size)
{
    if (size == 0)
    {
        return (0);
    }
    print_char(addr, size);
    return (addr);
}