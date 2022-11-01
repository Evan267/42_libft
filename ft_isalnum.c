int	ft_isalnum(int chr)
{
	int	value;

	value = 1;
	if (!ft_isalpha(chr) && !ft_isdigit(chr))
		value = 0;
	return (value);
}
