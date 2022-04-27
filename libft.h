/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansanche <ansanche@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:46:10 by ansanche          #+#    #+#             */
/*   Updated: 2022/04/25 20:58:30 by ansanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//FUNCIONES DE LIBC
int		ft_isalpha(int c);
//tests for any character for which isupper() or islower() is true
int		ft_isdigit(int c);
//tests for a decimal digit character
int		ft_isalnum(int c);
//tests for any character for which isalpha() or isdigit() is true
int		ft_isascii(int c);
//tests for an ASCII character
int		ft_isprint(int c);
//tests for any printing character, including space
size_t	ft_strlen(const char *s);
//computes the length of the string s
void	*ft_memset(void *b, int c, size_t len);
//writes len bytes of value c (converted to an unsigned char) to the string b
void	ft_bzero(void *s, size_t n);
//writes n zeroed bytes to the string s
void	*ft_memcpy(void *dst, const void *src, size_t n);
//copies n bytes from memory area src to memory area dst
void	*ft_memmove(void *dst, const void *src, size_t len);
//copies len bytes from string src to string dst. May overlap.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//copy and concatenate strings. guarantee NUL-termination if there is room
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
//appends string src to the end of dst
int		ft_toupper(int c);
//converts a lower-case letter to the corresponding upper-case letter
int		ft_tolower(int c);
//converts an upper-case letter to the corresponding lower-case letter
char	*ft_strchr(const char *s, int c);
//locates the first occurrence of c in the string pointed to by s
char	*ft_strrchr(const char *s, int c);
//is identical to strchr(), except it locates the last occurrence of c
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//lexicographically compare the null-terminated strings s1 and s2
void	*ft_memchr(const void *s, int c, size_t n);
/*locates the first occurrence of c in string s. 
returns a pointer to the byte located.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*compares byte string s1 against byte string s2.
returns zero if the two strings are identical, 
otherwise returns the difference between the first two differing bytes*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//locates the first occurrence of the null-terminated string needle in haystack
int		ft_atoi(const char *str);
//converts the initial portion of the string pointed to by str to int
void	*ft_calloc(size_t count, size_t size);
//The allocated memory is filled with bytes of value zero
char	*ft_strdup(const char *s1);
/*allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it*/

//FUNCIONES ADICIONALES
char	*ft_substr(char const *s, unsigned int start, size_t len);
//allocates enough memory for copying a new string form start index
char	*ft_strjoin(char const *s1, char const *s2);
//allocates enough memory to join both strings given.
char	*ft_strtrim(char const *s1, char const *set);
/*allocates enough memory for copying s1 without considering string
set in both, beginning and end*/
char	**ft_split(char const *s, char c);
//allocates enough memory in order to split string s using c as a delimiter
char	*ft_itoa(int n);
//allocates enough memory for casting int into a string.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//use the function f with each position of s to create a new string
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*use the function f with each position of s giving its 1st parameter as index
and the second one as the adress of char in case you need to modify it*/
void	ft_putchar_fd(char c, int fd);
//it sends c to the file descriptor chosen
void	ft_putstr_fd(char *s, int fd);
//write the string s to the file descriptor chosen
void	ft_putendl_fd(char *s, int fd);
//write the string s to the file descriptor chosen plus a line break
void	ft_putnbr_fd(int n, int fd);
//write the number n to the file descriptor chosen

//BONUS
t_list	*ft_lstnew(void *content);
//allocates enough memory and it creates a new element
void	ft_lstadd_front(t_list **lst, t_list *new);
//adds an element "new" to the beginning of the list
int		ft_lstsize(t_list *lst);
//counts the number of elements in a list
t_list	*ft_lstlast(t_list *lst);
//gets the last element of a list
void	ft_lstadd_back(t_list **lst, t_list *new);
//adds an element "new" to the end of the list
void	ft_lstdelone(t_list *lst, void (*del)(void*));
//gets rid of the content using function "del" as a paremeter
void	ft_lstclear(t_list **lst, void (*del)(void*));
//gets rid of each element of the list using "del" function and free(3)
void	ft_lstiter(t_list *lst, void (*f)(void *));
//goes through the list applying function (f) to the content
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/*goes through the list applying function (f) to the content while generating
a new list for each element*/

#endif
