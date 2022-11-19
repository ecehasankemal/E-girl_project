#include "e_girl.h"

char	*ft_read_and_create(int fd, char *str)
{
	char	*buff;
	int		rc;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rc = 1;
	while (rc != 0)
	{
		rc = read(fd, buff, BUFFER_SIZE);
		if (rc == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rc] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*e_girl(int fd)
{
	static char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_read_and_create(fd, str);
	if (!str)
		return (NULL);
	return (str);
}
