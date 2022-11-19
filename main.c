#include "e_girl.h"
#include <stdio.h>
#include <fcntl.h>

// O_RDONLY zaten var olan dosyayı okumak için ve sadece okumaya açık

int	main(void)
{

	//char	string[1000];
	int fd;
	fd = open("./obje2.txt",O_RDONLY);
	printf("%d", fd);
	while(1)
	{
		char *str = e_girl(fd);
		if(str == NULL)
		{
			break ;
		}
		printf("%s",str);
		free(str);
		break ;
	}
	puts("hoşgeldin cnm <3 Konuş benimle <==3");
	while (1)
	{
		char	string[1000];
		//puts("hoşgeldin cnm <3");
		ft_gets(string);
		if (ft_strlen(string) == 2 && string[0] == '-' && string[1] == '1')
			break;
		printf("vav tebrikler\n");
	}
	printf("işlem sonlandı\n");
	
}
