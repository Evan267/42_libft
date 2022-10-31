int	ft_isdigit(int str)
{
	int	value;

	value = 1;
	if (str < 48 || str > 57)
		value = 0;
	return (value);
}
