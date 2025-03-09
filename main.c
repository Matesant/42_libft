#include <stdio.h>
#include "libft.h"

void test_character_functions()
{
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_isalnum('Z'): %d\n", ft_isalnum('Z'));
    printf("ft_isascii(127): %d\n", ft_isascii(127));
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("ft_tolower('Z'): %c\n", ft_tolower('Z'));
}

void test_string_functions()
{
    char str[] = "Hello, World!";
    printf("\nft_strlen: %zu\n", ft_strlen(str));
    printf("ft_strchr('o'): %s\n", ft_strchr(str, 'o'));
    printf("ft_strrchr('o'): %s\n", ft_strrchr(str, 'o'));
    printf("ft_strncmp('abc', 'abd', 2): %d\n", ft_strncmp("abc", "abd", 2));

    char dest[50] = "Destination";
    char src[] = "Source";
    ft_strlcpy(dest, src, sizeof(dest));
    printf("ft_strlcpy: %s\n", dest);
}

void test_memory_functions()
{
    char buffer[20];
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    printf("\nft_memset: %s\n", buffer);

    char src[] = "Memory copy";
    char dest[20];
    ft_memcpy(dest, src, ft_strlen(src) + 1);
    printf("ft_memcpy: %s\n", dest);

    ft_bzero(dest, 5);
    printf("ft_bzero: First 5 bytes set to zero.\n");
}

void test_allocation_functions()
{
    char *dup = ft_strdup("Duplicated string");
    printf("\nft_strdup: %s\n", dup);
    free(dup);

    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        printf("ft_calloc: Successfully allocated memory.\n");
        free(arr);
    }
}

int main()
{
    printf("=== Testing Character Functions ===\n");
    test_character_functions();

    printf("\n=== Testing String Functions ===\n");
    test_string_functions();

    printf("\n=== Testing Memory Functions ===\n");
    test_memory_functions();

    printf("\n=== Testing Allocation Functions ===\n");
    test_allocation_functions();

    return 0;
}
