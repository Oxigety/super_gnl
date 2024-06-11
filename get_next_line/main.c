#include <stdio.h>
#include "get_next_line.h"

int main (void)
{
	int fd;//, fd2, fd3;
	char	*str, *str2, *str3;
	//int i = 1;

	str = "gougou";
	str2="fdfg";
	str3="gdfh";
	//fd = 0;
	fd = open("j.txt", O_RDONLY);
	//fd2 = open("p.txt", O_RDONLY);
	//fd3 = open("r.txt", O_RDONLY);


	while (str != NULL && str2 != NULL && str3 != NULL)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	/*	str2 = get_next_line(fd2);
		printf("%s", str2);
		free(str2);
		str3 = get_next_line(fd3);
		printf("%s", str3);
		free(str3);*/
		//i++;
		//printf("%d", i);

	}
	close(fd);
	//close(fd2);
	//close(fd3);
	return (0);
}