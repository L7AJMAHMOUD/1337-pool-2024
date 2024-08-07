#include <unistd.h>
#include <stdio.h>
int ln(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
char    *ft_strrev(char *str)
{
    int i = 0;
    char k;
    int end = ln(str) - 1;

    while(i < end)
    {
        k = str[i];
        str[i] = str[end];
        str[end] = k;
        i++;
        end--;
    }
    return(str);
}
int main()
{
    char tab[] = "mahmoud";

    char *pt = ft_strrev(tab);
    printf("%s\n",pt);
}