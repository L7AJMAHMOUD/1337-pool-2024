#include <stdio.h>
#include "libft.h" // Include the header file for your library

int main() {
    // Test ft_putchar
    ft_putchar('A');
    ft_putchar('\n');

    // Test ft_swap
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    // Test ft_putstr
    ft_putstr("Hello, World!\n");

    // Test ft_strlen
    char str[] = "Hello";
    printf("Length of '%s' is %d\n", str, ft_strlen(str));

    // Test ft_strcmp
    char s1[] = "Hello", s2[] = "World";
    printf("Comparison result between '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2));

    return 0;
}
