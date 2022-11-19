#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0')
		&& (s2[index] != '\0'))
		index++;
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

int	main(void)
{
	//int	count;
	char	str[1024];

	gets(str);

	if (ft_strcmp(str, "haha") == 0)
	{
		printf("fakyu");
	}
	else
		printf("özür dilerim %s", str);
}
