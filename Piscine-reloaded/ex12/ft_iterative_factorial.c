int	ft_iterative_factorial(int nb)
{
	int res;
	
	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 )
		return (1);
	while (nb >= 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
