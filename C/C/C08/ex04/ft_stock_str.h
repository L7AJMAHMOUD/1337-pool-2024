#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H
typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
}
t_stock_str;
void ft_show_tab(struct s_stock_str *par);
void ft_putstr(char *str);
void   ft_putchar(char c);
void ft_putnbr(int nb);
char *ft_strdup(char *src); 
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
#endif