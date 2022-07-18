#include <stdlib.h>

int nbr_len(int nbr)
{
	int i;
	
	i = 0;
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nbr)
{
	int i;
	int len;
	char *result;

	i = 0;
	len = nbr_len(nbr);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (nbr == 0)
		return ("0\0");
	if (nbr == -2147483648)
			return ("-2147483648\0");
	if (nbr < 0)
	{
		nbr *= -1;
		result[0] = '-';
	}
	result[len] = '\0';
	while (nbr > 0)
	{
		result[len-1] = (nbr % 10) + '0';
		nbr /= 10;
		len --;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1234));
}
