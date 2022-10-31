int	ft_isprint(int chr)
{
	int	value;

	value = 1;
	if (chr < 40 || chr > 176)
		value = 0;
	return (value);
}
