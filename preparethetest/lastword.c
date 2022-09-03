#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char *ans;

	i = 0;
	if (ac == 2)
	{	
		ans = &av[1][0];
		while (av[1][i] != '\0')
		{
			if (av[1][i] <= 32 && av[1][i + 1] > 32)
				ans = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (ans && ans[i] > 32)
		{
			write(1, &ans[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
