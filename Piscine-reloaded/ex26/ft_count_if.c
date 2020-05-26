int	ft_count_if(char **tab, int(*f)(char*))
{
	int	value;
	int	i;

	value = 0;
	i = 0;
	while (tab[i])
	{
		value += f(tab[i]);
		i++;
	}
	return (value);
}
