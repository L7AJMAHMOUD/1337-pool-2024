#include <stdio.h>
int occ_a(char *str)
{
    int i = 0;
    int count_a = 0;
    while(str[i])
    {
        if(str[i] == 'A')
        {
            count_a++;
        }
        i++;
    }
    return(count_a);
}
int main()
{
    char tab[] = "mhdfkkAkcdlmdaAA";
    int k = occ_a(tab);

    printf("%d\n",k);
}