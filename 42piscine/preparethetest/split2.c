
#include <stdlib.h>

int is_sep(char c)
{
	if(c == ' ' || c == '\n' || c=='\t')
		return (1);
	if (c == 0)
		return (1);
	return (0);
}

int word_count(char *str)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if(!is_sep(*str) && *str)
			cnt++;
		while(!is_sep(*str) && *str)
			str++;
		while(is_sep(*str) && *str)
			str++;
	}
	return (cnt);
}

void ft_strcpy(char *dest, char *src, char *end)
{
	while(src < end)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}

char **ft_split(char *str)
{
	int i;
	char *temp;
	char **answer;

	i = 0;
	answer = (char **)malloc(sizeof(char *) * word_count(str) + 1);
	if(!answer)
		return (0);
	while(*str)
	{
		if(!is_sep(*str))
		{
			temp = str;
			while(!is_sep(*str) && *str)
				str++;
			answer[i] = (char *)malloc(str - temp + 1);
			ft_strcpy(answer[i], temp, str);
			i++;
			if(!str)
				break ; 
		}
		str++;
	}
	answer[i] = 0;
	return (answer);
}

#include <stdio.h>
int main()
{
	char a[100] = "";
	char **answer;
	answer = ft_split(a);

	for (int i = 0; i < 5 ; i++)
	{
		printf("%s\n",answer[i]);
	}

}
