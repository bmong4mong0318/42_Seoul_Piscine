int is_used(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
}

int is_alpha(char c)
{
	if( )
}

int is_upper

int count_and fill(char *str, char c)
{
	int i
	int count;

	if (is_upper(c))
	{	
		while (str[i])
		{
			if (str[i] == c)
				count++
			i++;
		}
		while (str[i])
		{
			if (str[i] == c + 32)
				count++;
			i++;
		}
	}
	else
	{
		while (str[i])
		{
			if (str[i] == c)
				count++;
			i++;
		}
		i = 0;
		while (str[i])
		{
			if (str[i] == c - 32)
				count++;
			i++;
		}
	}
	return (count);
}

int count_used_letters(char *str)
{
	while(str[i])
	{
		if(is_alpha(str[i] && !is_used(used, str[i])))
		{
			count++;
			if(is_upper(str))
			{
				used[j++]= str[i];
				used[j++]= str[i]+32;
			}
			else
			{
				used[j++] = str[i];
				used[j++] = str[i]-32;
			}
			i++;

		}
	}
}


int count_used_letters(char *str)
{

	count_used = count_used_letters

	while(str[i])
	{
		if(is_alpha(str[i] && !is_used(used, str[i])))
		{
			count++;
			if(is_upper(str))
			{
				if(count < count_used)
					printf("%d%c, " count_and_fill(str, str[i]), str[i]);
				else
					printf("%d%c" count_and_fill(str, str[i]), str[i]);
				used[j++]= str[i];
				used[j++]= str[i]+32;
			}
			else
			{
				if(count < count_used)
					printf("%d%c, " count_and_fill(str, str[i]), str[i]);
				else
					printf("%d%c" count_and_fill(str, str[i]), str[i]);
				used[j++] = str[i];
				used[j++] = str[i]-32;
			}
			i++;
		}
	}
}

void count_alpha(char *str)
{
	char used[256];
	int count;
	int count_used;
	count_used = count_used_letters(str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if(is_alpha(str[i]) && !is_used(used, str[i]))
		{
			count++;
			if(is_upper(str[i]))
			{
				if(count < count_used)
					printf("%d%c, " count_and_fill(str, str[i]), str[i]);
				else
					printf("%d%c" count_and_fill(str, str[i]), str[i]);
				used[j++] = str[i];
			  	used[j++] = str[i] + 32;	
			}
			else
			{
				if(count < count_used)	
					printf("%d%c, " count_and_fill(str, str[i]), str[i]);
				else
					printf("%d%c" count_and_fill(str, str[i]), str[i]);
				used[j++] = str[i];
				used[j++] = str[i] - 32;
			}
		}
		i++;
	}
}
