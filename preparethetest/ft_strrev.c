int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;
	int tmp;
	int len2;

	i = 0;
	len = ft_strlen(str);
	len--;
	len2 = len/2;
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

#include <stdio.h>
int main()
{
	char a[] = "string";
	printf("%s\n", ft_strrev(a));
}
