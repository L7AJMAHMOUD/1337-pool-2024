#include <stdio.h>
char *countlines(char *str)
{
    int count = 0;
    int inwo = 0;
    int i = 0;
    while(str[i])
    {
        if(str[i] != ' ')
        {
            if(inwo == 0 && 'a' <= str[i] && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
                inwo = 1;
            }
        }
        else
        {
            inwo = 0;
        }
        i++;
    }
    return(str);
}

int main()
{
    char tab[] = "42asdl;sald vfsnbfmb vsv vsdvsd";

    char *ptr = countlines(tab);

    printf("%s\n",ptr);
}