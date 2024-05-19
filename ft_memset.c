void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	chr;
	int	i;

	chr = c;
	i = 0;
	while (i != n)
	{
		str[i] = chr;
		i++;
	}
	return (s);
}
