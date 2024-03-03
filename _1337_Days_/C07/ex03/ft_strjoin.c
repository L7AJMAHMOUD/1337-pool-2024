#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

    i = 0;
	while (str[i])
    {
		i++;
    }
	return (i);
}
char *ft_strjoin(int size, char **strs, char *sep) 
{  
    int i;
    int total_len;

    i = 0;
    total_len = 0;
    while (i < size)
    {
        total_len = total_len + ft_strlen(strs[i]);
        i++;
    }
    total_len = total_len + ft_strlen(sep) + 1;
    char *final_result = (char *)malloc(total_len);
    if (final_result == NULL) 
    {
        return NULL;
    }
    i = 0;
    int index = 0;
    while (i < size) 
    {
        int length = 0;
        while (strs[i][length]) 
        {
            final_result[index] = strs[i][length];
            length++;
            index++;
        }
        if(i < size - 1)
        {
            int sep_index = 0;

            while(sep[sep_index])
            {
                final_result[index]  = sep[sep_index];
                index++;
                sep_index++;
            }
        }
        i++;
    }
    final_result[index] = '\0';
    return final_result;
}