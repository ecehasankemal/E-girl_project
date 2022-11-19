#ifndef E_GIRL_H
# define E_GIRL_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*e_girl(int fd);
char	*ft_gets(char *buf);
char	*ft_read_and_create(int fd, char *str);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *string, char *buff);
#endif
