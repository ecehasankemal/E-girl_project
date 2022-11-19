#include <stdlib.h>
#include <stdio.h>
#include "e_girl.h"

/*int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}*/

char	*str_capitalizer(char *str)
{
	int	iter;
	int	bytelen;
	char	*result;

	bytelen = ft_strlen(str);
	iter = 0;
	result = malloc((bytelen * sizeof(char)) + 1);
	if (str[iter] >= 'a' && str[iter] <= 'z')
		result[iter] = str[iter] -= 32;
	iter++;
	while (str[iter] != '\0')
	{
		if (str[iter] >= 'A' && str[iter] <= 'Z')
			result[iter] = str[iter] += 32;
		if (str[iter] >= 'a' && str[iter] <= 'z')
			result[iter] = str[iter];
		if ((str[iter] >= 'a' && str[iter] <= 'z') &&
			(str[iter - 1] == ' ' || str[iter - 1] == '\t'))
			result[iter] = str[iter] -= 32;
		iter++;
	}
	result[iter] = '\0';
	return (result);
}

/*int	main(void)
{
	char	str[] = "mErHabA";
	char	*result;

	result = str_capitalizer(str);
	printf("%s", result);
}*/
