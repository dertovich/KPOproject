#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const char	*s);
char	*ft_strchr(const char	*s, int c);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dst_size);
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dst_size);
char	*ft_strdup(const char	*s);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);

void	*ft_memset(void	*b, int c, size_t	len);
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
void	*ft_calloc(size_t	nmemb, size_t	size);

char	*ft_itoa_base(unsigned long number, char *base);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(unsigned int n);
int		ft_atoi(const char	*str);
char	*ft_strjoin(char const	*s1, char const *s2);
char	*ft_chjoin(char const	*s, char const c);
char	*ft_strndup(const char *s, size_t	n);

int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char	*s, int fd);
int		ft_putnchar_fd(char c, int fd, int n);
int		ft_putnstr_fd(char	*s, int fd, int n);

#endif
