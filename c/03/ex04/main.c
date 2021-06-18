#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//http://pythontutor.com/c.html#code=char%20%20%20%20*ft_strstr%28char%20*str,%20char%20*to_find%29%0A%7B%0A%20%20%20%20int%20i%3B%0A%20%20%20%20int%20j%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20if%20%28to_find%5B0%5D%20%3D%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20return%20%28str%29%3B%0A%20%20%20%20while%20%28str%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20j%20%3D%200%3B%0A%20%20%20%20%20%20%20%20while%20%28str%5Bi%20%2B%20j%5D%20%3D%3D%20to_find%5Bj%5D%20%26%26%20str%5Bi%20%2B%20j%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20if%20%28to_find%5Bj%20%2B%201%5D%20%3D%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20return%20%28%26str%5Bi%5D%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20j%2B%2B%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%7D%0A%20%20%20%20return%20%280%29%3B%0A%7D%0A%0Aint%20main%28%29%20%7B%0A%20%20%20%20char%20*str%3B%0A%20%20%20%20char%20*to_find%3B%0A%20%20%20%20char%20*buff%3B%0A%20%20%20%20char%20*ft_buff%3B%0A%0A%20%20%20%20str%20%3D%20strcpy%28calloc%2811,%20sizeof%28char%29%29,%20%22alo%20galera%22%29%3B%0A%20%20%20%20to_find%20%3D%20strcpy%28calloc%287,%20sizeof%28char%29%29,%20%22galera%22%29%3B%0A%20%20%20%20buff%20%3D%20strstr%28str,%20to_find%29%3B%0A%20%20%20%20ft_buff%20%3D%20ft_strstr%28str,%20to_find%29%3B%0A%20%20%20%20if%20%28buff%20!%3D%20ft_buff%29%0A%20%20%20%20%20%20%20%20printf%28%22%5B1%5D%20KO,%20substrings%20don't%20match%28expected%3A%25s,%20got%3A%25s%29%5Cn%22,%20buff,%20ft_buff%29%3B%20%0A%20%20%20%20else%0A%20%20%20%20%20%20%20%20printf%28%22%5B1%5D%20OK.%20expected%3A%20%25s%20result%3A%20%25s%5Cn%22,%20buff,%20ft_buff%29%3B%0A%20%20%20%20return%20%280%29%3B%0A%20%20%0A%7D&curInstr=46&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}
