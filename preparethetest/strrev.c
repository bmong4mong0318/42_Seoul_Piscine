#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	int len2;
	char tmp;

	i = 0;
	len = ft_strlen(str);
	len2 = len/2;
	len--;
	while (i < len2)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int main()
{
	char str[] = "gbrireugneb";
	char *ans; 
	ans = ft_strrev(str);	

	for (int i = 0; i < 11; i++)
		printf("%c", ans[i]);
}
