#include <stdlib.h>

int ft_abs(int x)
{
	if (x<0)
		return (-x);
	return (x);
}

int *rrange(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int *)malloc(sizeof(int) * ft_abs(end - start) + 1);
	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i]= end;
	while (end < start)
	{
		tab[i] =end;
		end++;
		i++;
	}
	tab[i] = end;
	return (tab);
}

#include <stdio.h>
int main()
{

	int *a;
	a = rrange(1,4);
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n", a[i]);
	}
}
