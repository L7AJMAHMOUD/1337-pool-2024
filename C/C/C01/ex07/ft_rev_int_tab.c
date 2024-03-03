void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int e;
    int c;

    i = 0;
    e = size - 1;
    while(i < size / 2)
    {
        c = tab[i];
        tab[i] = tab[e];
        tab[e] = c;
        i++;
        e--;
    }
}  