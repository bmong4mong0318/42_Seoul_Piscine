int ft_atoi(char *str)
{
	int plma;
	int ans;

	plma = 1;
	ans = 0;
	while (*str)
	{
		if((*str == '-' || *str == '+') && !(*(str + 1) >= '0' && *(str + 1) <= '9'))
			return (0);
		if ((*str == '-' || *str == '+') && (*(str + 1) >= '0' && *(str + 1) <= '9'))
		{
			if(*str == '-')
				plma *= -1;
		}
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				ans = ans * 10 + (*str - '0');
				str++;
			} 
			break;
		}
		str++;
	}
	return (plma * ans);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", ft_atoi("      -000023231"));
	printf("%d\n", atoi("      -000023231"));
}
