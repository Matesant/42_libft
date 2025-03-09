/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:52:28 by matesant          #+#    #+#             */
/*   Updated: 2023/08/16 11:17:05 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief Checks if a character is an alphabetic letter (A-Z or a-z).
 */
int ft_isalpha(int c);

/**
 * @brief Checks if a character is a digit (0-9).
 */
int ft_isdigit(int c);

/**
 * @brief Checks if a character is alphanumeric (A-Z, a-z, 0-9).
 */
int ft_isalnum(int c);

/**
 * @brief Checks if a character is part of the ASCII table.
 */
int ft_isascii(int c);

/**
 * @brief Checks if a character is printable.
 */
int ft_isprint(int c);

/**
 * @brief Computes the length of a string.
 */
size_t ft_strlen(const char *s);

/**
 * @brief Fills a block of memory with a specified byte value.
 */
void *ft_memset(void *str, int c, size_t n);

/**
 * @brief Sets a block of memory to zero.
 */
void ft_bzero(void *s, size_t n);

/**
 * @brief Copies a block of memory from source to destination.
 */
void *ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Safely copies memory even when source and destination overlap.
 */
void *ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Copies a string into a buffer, ensuring null-termination.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t n);

/**
 * @brief Concatenates two strings into a buffer, ensuring null-termination.
 */
size_t ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Converts a lowercase letter to uppercase.
 */
int ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 */
int ft_tolower(int c);

/**
 * @brief Locates the first occurrence of a character in a string.
 */
char *ft_strchr(const char *str, int c);

/**
 * @brief Locates the last occurrence of a character in a string.
 */
char *ft_strrchr(const char *s, int c);

/**
 * @brief Compares two strings up to 'n' characters.
 */
int ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Searches for a byte in a block of memory.
 */
void *ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares two blocks of memory.
 */
int ft_memcmp(const void *str1, const void *str2, size_t n);

/**
 * @brief Searches for a substring within a string up to 'n' characters.
 */
char *ft_strnstr(const char *str, const char *substr, size_t n);

/**
 * @brief Converts a string to an integer.
 */
int ft_atoi(const char *str);

/**
 * @brief Allocates memory and initializes it to zero.
 */
void *ft_calloc(size_t elem, size_t n);

/**
 * @brief Duplicates a string by allocating memory for it.
 */
char *ft_strdup(const char *str);

/**
 * @brief Extracts a substring from a string.
 */
char *ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Joins two strings into a new allocated string.
 */
char *ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Trims leading and trailing characters from a string.
 */
char *ft_strtrim(char const *s1, char const *set);

/**
 * @brief Splits a string into an array of substrings using a delimiter.
 */
char **ft_split(char const *s, char c);

/**
 * @brief Converts an integer to a string.
 */
char *ft_itoa(int n);

/**
 * @brief Applies a function to each character of a string, creating a new one.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies a function to each character of a string in-place.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Writes a string to a file descriptor.
 */
void ft_putstr_fd(char *s, int fd);

/**
 * @brief Writes an integer to a file descriptor.
 */
void ft_putnbr_fd(int n, int fd);

/**
 * @brief Writes a character to a file descriptor.
 */
void ft_putchar_fd(char c, int fd);

/**
 * @brief Writes a string followed by a newline to a file descriptor.
 */
void ft_putendl_fd(char *s, int fd);

/**
 * @brief Returns the last element of a linked list.
 */
t_list *ft_lstlast(t_list *lst);

/**
 * @brief Iterates over a linked list and applies a function to each element.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Adds a new element to the end of a linked list.
 */
void ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Adds a new element to the beginning of a linked list.
 */
void ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Clears a linked list, freeing all nodes.
 */
void ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief Deletes a single element from a linked list.
 */
void ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * @brief Creates a new linked list node with given content.
 */
t_list *ft_lstnew(void *content);

/**
 * @brief Counts the number of elements in a linked list.
 */
int ft_lstsize(t_list *lst);

/**
 * @brief Creates a new linked list by applying a function to each element.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif