int	ft_isprint(int chr)
{
	int	value;

	value = 1;
	if (chr < 32 || chr > 126)
		value = 0;
	return (value);
}
