#include <stdlib.h>
#include <stdio.h>

/*size_t	ft_strlen(const char *str)
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

char	*ft_read_and_create(int fd, char *str)
{
	char	*buff;
	int	rc;

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

char	*ft_gets(char *buff)
{
	int	fd;
	int	count;
	char	*str;

	fd = 1;
	str = buff;
}*/

/*char	*ft_gets(char *buf)
{
	int	count;
	char	*str;

	flockfile(stdin);
	while (count = getchar_unlocked() != '\n')
	{
		if (count == EOF)
		{
			if (str == buf)
			{
				funlockfile(stdin);
				return (NULL);
			}
			else
				break;
		}
		*str++ = count;
	}
	*str = '\0';
	funlockfile(stdin);
	return (buf);
}*/
/*char	*ft_gets(char *buf)
{
	int c;
	char *s;
	flockfile(stdin);
	for (s = buf; (c = getchar_unlocked()) != '\n';)
		if (c == EOF)
			if (s == buf) {
				funlockfile(stdin);
				return (NULL);
			} else
				break;
		else
			*s++ = c;
	*s = '\0';
	funlockfile(stdin);
	return (buf);
}*/

/*char	*ft_gets(char *buf)
{
	int	count;
	char	*str;
	//flockfile(stdin);
	str = buf;
	//while ((count = getchar_unlocked()) != '\n')
	while ((count = getchar()) != '\n')
	{
		if (count == EOF)
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
}*/


char	*ft_gets(char *buf)
{
	int	count;
	char	*str;
	//flockfile(stdin);
	str = buf;
	//while ((count = getchar_unlocked()) != '\n')
	while ((count = getchar()) != '\n')
	{
		if (count == EOF)
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

int	main(void)
{
	char	str[1024];

	printf("lütfen bir string giriniz     \n");
	ft_gets(str);
	printf("girdiginiz strirng =     %s", str);
}
