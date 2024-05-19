int	ft_isalnum(int	c)
{
	if (c >= 'a' && <= 'z' || c >= 'A' && <= 'Z' ||
		c >= '0' && <= '9')
		return (1);
	return (0);
}
