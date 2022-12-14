
/*                    GNU GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007*/

#include "e_girl.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char *string, char *buff)
{
	size_t	index;
	size_t	jndex;
	char	*str;

	if (!string)
	{
		string = (char *)malloc(1 * sizeof(char));
		string[0] = '\0';
	}
	if (!string || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(string) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	index = -1;
	jndex = 0;
	if (string)
		while (string[++index] != '\0')
			str[index] = string[index];
	while (buff[jndex] != '\0')
		str[index++] = buff[jndex++];
	str[ft_strlen(string) + ft_strlen(buff)] = '\0';
	//free(string);
	return (str);
}

int ft_getchar(void)
{
    static char buf[8192];
    static char *bufp;
    static int i;

    bufp = buf;
    i = 0;
    if (i == 0)
    {
        i = read(0, buf, 1);
        bufp = buf;
    }
    if (--i >= 0)
        return  *bufp++;
    return (-1);
}

char	*ft_gets(char *buf)
{
	int	count;
	char	*str;
	//flockfile(stdin);
	str = buf;
	//while ((count = getchar_unlocked()) != '\n')
	while ((count = ft_getchar()) != '\n')
	{
		if (count == -1)
			if (str == buf) {
				//funlockfile(stdin);
				return (NULL);
			} else
				break;
		else
			*str++ = count;
	}
	*str = '\0';
	//funlockfile(stdin);
	return (buf);
}
