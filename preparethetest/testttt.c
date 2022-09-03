









int count_used_letters(char *str)
{
	int	 	j = 0;
	int 	i = 0;
	int 	count;
	char 	used[52];

	while(str[i])
	{
		if (is_alpha(str[i]) && !is_used(used, str[i]))
		{
				count++;
				if(is_upper(str[i]))
				{
					used[j++] = str[i];
					used[j++] = str[i] + 32;
				}
				else
				{
					used[j++] = str[i];
					used[j++] = str[i] - 32;
				}
			
		}
		i++;
	}
	return (count);
}



void count_alpha (char *str)
{
	int	 	j = 0;
	int 	i = 0;
	int 	count;
	char 	used[52];

	while(str[i])
	{
		if (is_alpha(str[i]) && !is_used(used, str[i]))
		{
				count++;
				if(is_upper(str[i]))
				{
					if(count < count_used)
						printf("%d%c, ", count_and_fill(used, str[i]), str[i])
					else
						printf("%d%c", count_and_fill(used, str[i]), str[i])
					used[j++] = str[i];
					used[j++] = str[i] + 32;
				}
				else
				{
					used[j++] = str[i];
					used[j++] = str[i] - 32;
				}
			
		}
		i++;
	}
}





void	count_alpha(char *str)
{
	count_used = count_used_letters(used, str[i]);

	while (str[i])
	{

		if(is)
	}
}





int main (int ac, char *av)
