#include <stdio.h>
int     count_words(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        {
            i++;
        }
        if(str[i] && str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
        {
            j++;
        }
        while(str[i] && str[i] != ' ' && !(str[i] >= 9 && str[i] <= 13))
        {
            i++;
        }
    }
    return(j);
}
int main()
{
    char str[] = "wa drari golo m3ay a";
    printf("%d\n",count_words(str));
}