#include <stdio.h>
int ft_occ(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == 'A')
        {
            return(1);
        }
        i++;
    }
    return(0);
}
int main()
{
    char tab[] = "loumouz looumz";
    int k = ft_occ(tab);
    printf("%d\n",k);
}