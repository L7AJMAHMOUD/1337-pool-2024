#include <stdio.h>
int count_alen(char *str)
{
    int i = 0;
    while(str[i] && str[i] != 'A')
    {
        i++;
    }
    return(i);
}

int main()
{
    char tab[] = "mmmvAh";
    int s = count_alen(tab);
    printf("%d\n",s);
}