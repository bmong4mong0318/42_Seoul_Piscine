#include <stdlib.h>

char **split(char *str)
{
	int i;
	int x;
	int y;
	char **tab;

	i = 0;
	x = 0;
	tab = (char **)malloc(sizeof(char *) * 1000);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			y = 0;
			tab[x] = (char *)malloc(sizeof(char) * 1000); 
			while (str[i] > 32 && str[i] <127)
			{
				tab[x][y] = str[i];
				y++;
				i++;
			}
			tab[x][y] = 0;
			x++;
		}
		i++;
	}
	tab[x] = 0;
	return (tab);
}

#include <stdio.h>
int main()
{
	char a[100] = "";
	char **answer;
	answer = split(a);
	
	for (int i = 0; i < 5 ; i++)
	{
		printf("%s\n",answer[i]);
	}
	
}
